#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>

/* Binary tree node structure */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_print(const binary_tree_t *tree);
void binary_tree_delete(binary_tree_t *tree);

#endif /* BINARY_TREES_H */

/* ------------------- Implementation ------------------- */

/* Create a new node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	if (!node)
		return NULL;

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return node;
}

/* Delete a binary tree recursively */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}

/* ------------------- Queue Implementation ------------------- */

/* Simple queue for level-order traversal */
typedef struct node_queue_s
{
	const binary_tree_t **nodes;
	size_t front;
	size_t rear;
	size_t size;
} node_queue_t;

/* Create queue */
node_queue_t *queue_create(size_t capacity)
{
	node_queue_t *q = malloc(sizeof(node_queue_t));
	if (!q)
		return NULL;
	q->nodes = malloc(sizeof(binary_tree_t *) * capacity);
	if (!q->nodes)
	{
		free(q);
		return NULL;
	}
	q->front = 0;
	q->rear = 0;
	q->size = capacity;
	return q;
}

/* Check if queue is empty */
int queue_is_empty(node_queue_t *q)
{
	return q->front == q->rear;
}

/* Enqueue a node */
int queue_enqueue(node_queue_t *q, const binary_tree_t *node)
{
	if (q->rear == q->size)
		return 0;
	q->nodes[q->rear++] = node;
	return 1;
}

/* Dequeue a node */
const binary_tree_t *queue_dequeue(node_queue_t *q)
{
	if (queue_is_empty(q))
		return NULL;
	return q->nodes[q->front++];
}

/* Delete queue */
void queue_delete(node_queue_t *q)
{
	if (!q)
		return;
	free(q->nodes);
	free(q);
}

/* ------------------- Level-order traversal ------------------- */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	node_queue_t *q = queue_create(1000); /* Adjust capacity if needed */
	if (!q)
		return;

	queue_enqueue(q, tree);

	while (!queue_is_empty(q))
	{
		const binary_tree_t *node = queue_dequeue(q);
		func(node->n);

		if (node->left)
			queue_enqueue(q, node->left);
		if (node->right)
			queue_enqueue(q, node->right);
	}

	queue_delete(q);
}


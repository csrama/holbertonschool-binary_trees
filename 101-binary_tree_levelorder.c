#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t **queue;
	const binary_tree_t *current;
	int front = 0, rear = 0, size = 0;

	if (tree == NULL || func == NULL)
		return;

	size = 1024;
	queue = malloc(sizeof(binary_tree_t *) * size);
	if (queue == NULL)
		return;

	queue[rear++] = tree;

	while (front < rear)
	{
		current = queue[front++];
		func(current->n);

		if (current->left != NULL)
		{
			if (rear >= size)
			{
				size *= 2;
				queue = realloc(queue, sizeof(binary_tree_t *) * size);
				if (queue == NULL)
					return;
			}
			queue[rear++] = current->left;
		}

		if (current->right != NULL)
		{
			if (rear >= size)
			{
				size *= 2;
				queue = realloc(queue, sizeof(binary_tree_t *) * size);
				if (queue == NULL)
					return;
			}
			queue[rear++] = current->right;
		}
	}

	free(queue);
}

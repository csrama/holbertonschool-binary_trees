#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_levelorder - Goes through binary tree using level-order
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t **queue;
	const binary_tree_t *current;
	int front = 0, rear = 0, size = 1024;
	if (!tree || !func)
		return;
	queue = malloc(sizeof(binary_tree_t *) * size);
	if (!queue)
		return;
	queue[rear++] = tree;
	while (front < rear)
	{
		current = queue[front++];
		func(current->n);
		if (current->left)
		{
			if (rear >= size)
			{
				size *= 2;
				queue = realloc(queue, sizeof(binary_tree_t *) * size);
			}
			if (!queue)
				return;
			queue[rear++] = current->left;
		}
		if (current->right)
		{
			if (rear >= size)
			{
				size *= 2;
				queue = realloc(queue, sizeof(binary_tree_t *) * size);
			}
			if (!queue)
				return;
			queue[rear++] = current->right;
		}
	}
	free(queue);
}

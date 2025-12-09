#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	const binary_tree_t **queue;
	const binary_tree_t *current;
	int f = 0, r = 0, s = 1024, flag = 0;

	if (!tree)
		return (0);
	queue = malloc(sizeof(binary_tree_t *) * s);
	if (!queue)
		return (0);
	queue[r++] = tree;
	while (f < r)
	{
		current = queue[f++];
		if (current->left)
		{
			if (flag)
			{
				free(queue);
				return (0);
			}
			queue[r++] = current->left;
		}
		else
			flag = 1;
		if (current->right)
		{
			if (flag)
			{
				free(queue);
				return (0);
			}
			queue[r++] = current->right;
		}
		else
			flag = 1;
	}
	free(queue);
	return (1);
}

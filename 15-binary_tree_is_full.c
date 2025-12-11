#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 *
 * Return: (1) if full, 0 if not, 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If leaf node */
	if (!tree->left && !tree->right)
		return (1);

	/* If both children exist, check recursively */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* If only one child exists */
	return (0);
}


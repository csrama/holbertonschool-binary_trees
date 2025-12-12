#include "binary_trees.h"

/**
 * _is_bst - Helper function to check if a tree is BST within limits
 * @tree: Pointer to node
 * @min: Minimum allowed value
 * @max: Maximum allowed value
 * Return: 1 if BST, 0 otherwise
 */
int _is_bst(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (_is_bst(tree->left, min, tree->n) &&
		_is_bst(tree->right, tree->n, max));
}

  /**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to root node
 * Return: 1 if valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (_is_bst(tree, -2147483648, 2147483647));
}


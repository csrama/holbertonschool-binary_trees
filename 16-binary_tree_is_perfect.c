#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	/* Check if node is a leaf */
	if (!tree->left && !tree->right)
		return (1);

	/* If either child is missing, not perfect */
	if (!tree->left || !tree->right)
		return (0);

	/* Recursively check left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (!binary_tree_is_perfect(tree->left) ||
	    !binary_tree_is_perfect(tree->right))
		return (0);

	return (1);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}


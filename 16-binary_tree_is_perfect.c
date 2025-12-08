#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise, 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, size;
	size_t expected;

	if (!tree)
		return (0);

	/* Height of tree */
	h = binary_tree_height(tree);

	/* Total number of nodes */
	size = binary_tree_size(tree);

	/* In a perfect tree: nodes = 2^(h+1) - 1 */
	expected = (1 << (h + 1)) - 1;

	if (size == expected)
		return (1);

	return (0);
}


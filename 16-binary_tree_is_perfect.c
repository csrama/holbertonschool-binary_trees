#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to root node
 *
 * Return: 1 if perfect, 0 otherwise, 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h, size;
	size_t expected;

	if (!tree)
		return (0);

	h = binary_tree_height(tree);
	size = binary_tree_size(tree);

	expected = (1 << (h + 1)) - 1;

	if (size == expected)
		return (1);

	return (0);
}


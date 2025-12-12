#include "binary_trees.h"
#include <stdlib.h>

 /**
 * bst_insert - Inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node of the BST
 * @value: Value to store in the node to be inserted
 *
 * Return: Pointer to the created node, or NULL on failure / duplicate
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node, *current, *parent = NULL;

	if (!tree)
		return (NULL);

	current = *tree;
	while (current)
	{
		parent = current;
		if (value == current->n)
			return (NULL); /* duplicate value, ignore */
		else if (value < current->n)
			current = current->left;
		else
			current = current->right;
	}

	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

	if (!parent)
		*tree = node; /* tree was empty */
	else if (value < parent->n)
		parent->left = node;
	else
		parent->right = node;

	return (node);
}


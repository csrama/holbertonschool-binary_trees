#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 *
 * Description: If parent already has a right-child, the new node takes its
 * place, and the old right-child becomes the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    /* Check if parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Create a new node */
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    /* If parent already has a right child */
    if (parent->right != NULL)
    {
        /* Set new node's right child to parent's old right child */
        new_node->right = parent->right;
        /* Update old right child's parent to new node */
        parent->right->parent = new_node;
    }

    /* Set parent's right child to new node */
    parent->right = new_node;

    return (new_node);
}

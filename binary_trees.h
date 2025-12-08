#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>

/* Structure for a binary tree node */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Basic Binary Tree Functions */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);

/* Insertion */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Traversals */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* Measures */
int binary_tree_height(const binary_tree_t *tree);
int binary_tree_depth(const binary_tree_t *tree);
int binary_tree_size(const binary_tree_t *tree);
int binary_tree_leaves(const binary_tree_t *tree);
int binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

/* Checks */
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
int binary_tree_is_complete(const binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);

/* Relationships */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second);

/* Rotations */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

#endif /* BINARY_TREES_H */


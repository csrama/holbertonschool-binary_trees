#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/* Structure for a binary tree node */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */

/* 0. Binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1. Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2. Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3. Delete entire tree */
void binary_tree_delete(binary_tree_t *tree);

/* 4. Print tree */
void binary_tree_print(const binary_tree_t *tree);

/* 14. Balance factor */
int binary_tree_balance(const binary_tree_t *tree);

/* 15. Is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* 16. Is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* 17. Sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18. Uncle */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* 19. Lowest common ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second);

/* Optional helper functions */
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */


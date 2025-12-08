#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

/* Basic binary tree node structure */
typedef struct binary_tree_s
{
	struct binary_tree_s *parent;
	int n;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */

/* 0. Create a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* 1. Insert left */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* 2. Insert right */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* 3. Delete entire binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* 4. Check if node is leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* 5. Check if node is root */
int binary_tree_is_root(const binary_tree_t *node);

/* 6. Pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* 7. In-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* 8. Post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* 9. Compute height */
size_t binary_tree_height(const binary_tree_t *tree);

/* 10. Compute depth */
size_t binary_tree_depth(const binary_tree_t *tree);

/* 11. Compute size */
size_t binary_tree_size(const binary_tree_t *tree);

/* 12. Count leaves */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* 13. Count nodes with at least 1 child */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* 14. Balance factor */
int binary_tree_balance(const binary_tree_t *tree);

/* 15. Check if tree is full */
int binary_tree_is_full(const binary_tree_t *tree);

/* 16. Check if tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* 17. Find sibling */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* 18. Find uncle */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

/* 19. Lowest common ancestor */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second);

/* 101. Level-order traversal */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* Utility function: print binary tree (given) */
void binary_tree_print(const binary_tree_t *tree);

#endif /* BINARY_TREES_H */


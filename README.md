#📄  Binary Trees Project

## Project Overview
This project implements a comprehensive binary tree data structure in C,
following the ALX/Holberton curriculum. It includes various operations
and traversal algorithms for binary trees.

## Learning Objectives
- Binary tree structure and properties
- Different tree traversal methods (pre-order, in-order, post-order)
- Tree measurements (height, depth, size)
- Node classification (leaf, root, internal nodes)
- Memory management for tree structures
- Binary Search Tree (BST) operations
- AVL Tree properties and validation
- Heap properties and operations

## Data Structures

/**
 * struct binary_tree_s - Binary tree node
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;    /* Binary Search Tree */
typedef struct binary_tree_s avl_t;    /* AVL Tree */
typedef struct binary_tree_s heap_t;   /* Max Binary Heap */

## Functions Implemented

### Basic Operations
1. binary_tree_node    - Creates a binary tree node
2. binary_tree_insert_left/right - Inserts nodes as children
3. binary_tree_delete  - Deletes an entire binary tree

### Tree Traversals
4. binary_tree_preorder  - Pre-order traversal
5. binary_tree_inorder   - In-order traversal
6. binary_tree_postorder - Post-order traversal
7. binary_tree_levelorder - Level-order traversal

### Tree Properties
8. binary_tree_is_leaf   - Checks if node is leaf
9. binary_tree_is_root   - Checks if node is root
10. binary_tree_height   - Measures tree height
11. binary_tree_depth    - Measures node depth
12. binary_tree_size     - Counts total nodes
13. binary_tree_leaves   - Counts leaf nodes
14. binary_tree_nodes    - Counts non-leaf nodes
15. binary_tree_balance  - Calculates balance factor
16. binary_tree_is_full  - Checks if tree is full
17. binary_tree_is_perfect - Checks if tree is perfect
18. binary_tree_is_complete - Checks if tree is complete

### Relationships
19. binary_tree_sibling  - Finds node's sibling
20. binary_tree_uncle    - Finds node's uncle
21. binary_trees_ancestor - Finds lowest common ancestor

### Binary Search Trees (BST)
22. binary_tree_is_bst   - Validates BST
23. bst_insert          - Inserts into BST
24. array_to_bst        - Builds BST from array
25. bst_search          - Searches in BST
26. bst_remove          - Removes from BST

### AVL Trees
27. binary_tree_is_avl   - Validates AVL tree

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees

## Testing
Each function has a test file (0-main.c, 1-main.c, etc.)

## Time Complexities
- Average: O(log n) for balanced trees
- Worst: O(n) for degenerate trees

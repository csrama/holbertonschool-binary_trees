# Binary Trees

## Description
Binary Trees are data structures where each node has at most two children.  
They enable efficient data operations and serve as foundational building blocks for advanced algorithms and real-world applications such as databases and AI systems.

---

## Learning Objectives
- Understand what a binary tree is
- Know the difference between a Binary Tree and a Binary Search Tree (BST)
- Understand the possible time complexity gains compared to linked lists
- Learn the concepts of depth, height, and size of a binary tree
- Explore different tree traversal methods
- Identify complete, full, perfect, and balanced binary trees

---

## Requirements
- Allowed editors: vi, vim, emacs
- Compiled on Ubuntu 20.04 LTS using gcc
- Compilation flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files must end with a new line
- A README.md file at the root of the project is mandatory
- Code must follow Betty style
- No global variables allowed
- Maximum of 5 functions per file
- Standard library usage is allowed
- Function prototypes must be declared in binary_trees.h
- All header files must be include-guarded

---

## File Descriptions

| File | Description | Time Complexity |
|------|------------|-----------------|
| binary_trees.h | Header file containing structure definitions and function prototypes | - |
| 0-binary_tree_node.c | Create a binary tree node | O(1) |
| 1-binary_tree_insert_left.c | Insert a node as left child | O(1) |
| 2-binary_tree_insert_right.c | Insert a node as right child | O(1) |
| 3-binary_tree_delete.c | Delete an entire binary tree | O(n) |
| 4-binary_tree_is_leaf.c | Check if a node is a leaf | O(1) |
| 5-binary_tree_is_root.c | Check if a node is root | O(1) |
| 6-binary_tree_preorder.c | Pre-order traversal | O(n) |
| 7-binary_tree_inorder.c | In-order traversal | O(n) |
| 8-binary_tree_postorder.c | Post-order traversal | O(n) |
| 9-binary_tree_height.c | Measure tree height | O(n) |
| 10-binary_tree_depth.c | Measure node depth | O(n) |
| 11-binary_tree_size.c | Measure tree size | O(n) |
| 12-binary_tree_leaves.c | Count leaves | O(n) |
| 13-binary_tree_nodes.c | Count nodes with at least one child | O(n) |
| 14-binary_tree_balance.c | Measure balance factor | O(n) |
| 15-binary_tree_is_full.c | Check if tree is full | O(n) |
| 16-binary_tree_is_perfect.c | Check if tree is perfect | O(n) |
| 17-binary_tree_sibling.c | Find sibling of a node | O(1) |
| 18-binary_tree_uncle.c | Find uncle of a node | O(1) |

---

## Edge Cases Handled
- NULL pointers
- Empty trees
- Single-node trees
- Invalid operations

---

## Tree Types Supported
- **Binary Tree**: Each node has at most two children
- **Full Binary Tree**: Every node has 0 or 2 children
- **Perfect Binary Tree**: All levels are completely filled
- **Complete Binary Tree**: All levels filled except possibly the last

---

## Authors
- Jana Bakri
- Rama Alshahri

---

## License
This project is for educational purposes as part of the Holberton School curriculum.

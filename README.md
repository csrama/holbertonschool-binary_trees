# 🌳 Binary Trees

## 📌 Overview
Binary Trees are hierarchical data structures where each node has **at most two children**.  
They are widely used to improve efficiency in data operations and form the basis of many advanced algorithms used in **databases, operating systems, and AI**.

---

## 🎯 Learning Objectives
By completing this project, you will be able to:
- Explain what a binary tree is
- Distinguish between a Binary Tree and a Binary Search Tree (BST)
- Understand time complexity improvements over linked lists
- Define and calculate **depth**, **height**, and **size**
- Implement different tree traversal techniques
- Identify full, complete, perfect, and balanced binary trees

---

## ⚙️ Requirements
- OS: **Ubuntu 20.04 LTS**
- Compiler: `gcc`
- Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Editors allowed: `vi`, `vim`, `emacs`
- No global variables
- Maximum **5 functions per file**
- All files must end with a new line
- Code must follow **Betty style**
- Standard C library allowed
- All function prototypes must be declared in `binary_trees.h`
- All header files must be include-guarded

---

## 📂 Project Files

| File | Description | Time Complexity |
|------|------------|-----------------|
| binary_trees.h | Structures and function prototypes | - |
| 0-binary_tree_node.c | Create a new node | O(1) |
| 1-binary_tree_insert_left.c | Insert left child | O(1) |
| 2-binary_tree_insert_right.c | Insert right child | O(1) |
| 3-binary_tree_delete.c | Delete entire tree | O(n) |
| 4-binary_tree_is_leaf.c | Check if node is a leaf | O(1) |
| 5-binary_tree_is_root.c | Check if node is root | O(1) |
| 6-binary_tree_preorder.c | Pre-order traversal | O(n) |
| 7-binary_tree_inorder.c | In-order traversal | O(n) |
| 8-binary_tree_postorder.c | Post-order traversal | O(n) |
| 9-binary_tree_height.c | Measure tree height | O(n) |
| 10-binary_tree_depth.c | Measure node depth | O(n) |
| 11-binary_tree_size.c | Measure tree size | O(n) |
| 12-binary_tree_leaves.c | Count leaves | O(n) |
| 13-binary_tree_nodes.c | Count nodes with children | O(n) |
| 14-binary_tree_balance.c | Balance factor | O(n) |
| 15-binary_tree_is_full.c | Check if tree is full | O(n) |
| 16-binary_tree_is_perfect.c | Check if tree is perfect | O(n) |
| 17-binary_tree_sibling.c | Find sibling | O(1) |
| 18-binary_tree_uncle.c | Find uncle | O(1) |

---

## 🧠 Concepts Covered
- Binary Trees vs Binary Search Trees
- Tree traversals (Pre-order, In-order, Post-order)
- Tree height, depth, and balance
- Tree classifications and properties

---

## ⚠️ Edge Cases
- NULL pointers
- Empty trees
- Single-node trees
- Invalid inputs

---

## 🌲 Supported Tree Types
- **Binary Tree**
- **Full Binary Tree**
- **Perfect Binary Tree**
- **Complete Binary Tree**

---

## 👩‍💻 Authors
- **Jana Bakri**
- **Rama Alshahri**

---

## 📜 License
This project is for educational purposes as part of the **Holberton School curriculum**.

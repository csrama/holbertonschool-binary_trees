🌳 Binary Trees: The Forest of Data Structures 🌲
📋 Quick Overview
Binary Tree = Each node has ≤ 2 children (Left & Right). Think of it as a family tree where each parent can have at most 2 kids!

⚡ Why Use Binary Trees?
Data Structure Search Insert Delete
Linked List 🐌 O(n) ⚡ O(1) 🐌 O(n)
Balanced Binary Tree ⚡ O(log n) ⚡ O(log n) ⚡ O(log n)
Unbalanced Tree 🐌 O(n) 🐌 O(n) 🐌 O(n)
Pro Tip: Keep your trees balanced for maximum speed! 🚀

🧭 Tree Terminology Made Simple
text
        🌳 [ROOT: Depth=0, Height=2]
        /  \
       /    \
   [A]      [B]   ← Siblings
 Depth=1   Depth=1
   / \        \
 [C] [D]      [E]  ← [D] & [E] are Leaves
      ↑
     Uncle of C
🚶 4 Ways to Walk Through Your Tree
c
// 1️⃣ PRE-ORDER: Root → Left → Right
// (Like reading a book: Chapter → Section → Subsection)

// 2️⃣ IN-ORDER: Left → Root → Right  
// (Gives SORTED output for Binary Search Trees! ✨)

// 3️⃣ POST-ORDER: Left → Right → Root
// (Delete children before parent 🧹)

// 4️⃣ LEVEL-ORDER: Row by row (BFS style)
🎯 Tree Type Cheat Sheet
Type Rule Visual
✅ Complete All levels full except last, left-packedtext
  🌳
 /  \
🍁   🍁
/ /
🍁 🍁

|
| ✅ **Full** | 0 or 2 children only |       🌳
     /  \
    🍁   🍁
   / \   
  🍁 🍁| 🏆 **Perfect** | Completely filled! |       🌳
     /  \
    🍁   🍁
   / \   / \
  🍁 🍁 🍁 🍁| ⚖️ **Balanced** | Left & right heights differ by ≤1 |       🌳
     /  \
    🍁   🍁
   /     \
  🍁      🍁
` |

## ⚡ Implementation Superpowers
```bash
# 🛠️ Compile ALL files with one command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees

# ✅ Run Betty style check:
betty-doc.pl *.c
betty-style.pl *.c

# 🧪 Test your code:
./binary_trees
📁 File Quick Reference
File What It Does Speed
0-binary_tree_node.c Creates a new tree node ⚡ O(1)
1-binary_tree_insert_left.c Add left child ⚡ O(1)
2-binary_tree_insert_right.c Add right child ⚡ O(1)
3-binary_tree_delete.c Delete entire tree 🐌 O(n)
4-binary_tree_is_leaf.c Check if node is leaf ⚡ O(1)
5-binary_tree_is_root.c Check if node is root ⚡ O(1)
6-binary_tree_preorder.c Root→Left→Right walk 🐌 O(n)
7-binary_tree_inorder.c Left→Root→Right walk 🐌 O(n)
8-binary_tree_postorder.c Left→Right→Root walk 🐌 O(n)
9-binary_tree_height.c Measure tree height 🐌 O(n)
10-binary_tree_depth.c Measure node depth 🐌 O(n)
11-binary_tree_size.c Count all nodes 🐌 O(n)
12-binary_tree_leaves.c Count leaf nodes 🐌 O(n)
13-binary_tree_nodes.c Count non-leaf nodes 🐌 O(n)
14-binary_tree_balance.c Check balance factor 🐌 O(n)
15-binary_tree_is_full.c Check if tree is full 🐌 O(n)
16-binary_tree_is_perfect.c Check if tree is perfect 🐌 O(n)
17-binary_tree_sibling.c Find node's sibling ⚡ O(1)
18-binary_tree_uncle.c Find node's uncle ⚡ O(1)
🚨 Common Gotchas & Fixes
c
// ❌ DON'T forget to check for NULL!
if (tree == NULL)
    return (0);

// ❌ DON'T access parent->left without checking parent!
if (parent->left != NULL) {
    // Handle existing child
}

// ✅ DO free memory in post-order for deletion!
free(tree->left);
free(tree->right);
free(tree);
🎮 Fun Tree Facts
🌳 Binary Search Trees auto-sort your data!

🤖 AI uses decision trees for machine learning

💾 Databases use B-Trees (binary tree's big sibling)

🎵 Huffman coding uses trees for file compression

🎮 Game AI uses trees to plan moves (chess, tic-tac-toe)

🔥 Pro Tips for Success
Visualize first - Draw the tree on paper! ✏️

Test edge cases - Empty tree, single node, unbalanced

Use recursion - Trees are recursive by nature!

Check memory - Valgrind is your friend!

Think about balance - Unbalanced trees = slow code

📊 Real-World Tree Usage
text
🎵 Spotify → BST for song search
🌐 Google → B-Trees for web indexing
🎮 Chess Engine → Decision trees for moves
📱 File System → Directory trees
🧠 AI → Random forests for predictions
🚀 Quick Start Commands
bash
# Clone your project and get started:
git clone <your-repo>
cd binary_trees

# Compile everything:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o trees

# Run tests (create a test file first!):
echo "int main() { /* your tests */ return 0; }" > test.c

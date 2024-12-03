# Binary Trees

This project implements basic operations for binary trees in C, including node creation, insertion, deletion, and calculating tree height.

## File Structure

- `binary_trees.h`: Header file containing the function prototypes and structure definitions.
- `binary_tree_print.c`: C file with the implementation of the binary tree functions.
- `main.c`: Sample test cases for the binary tree functions.

## Usage

1. Clone the repository.
2. Compile the code using `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_tree`.
3. Run the compiled program with `./binary_tree`.

## Functions

- `binary_tree_node(int value)`: Creates a new binary tree node.
- `binary_tree_insert_left(binary_tree_t *parent, int value)`: Inserts a node as the left child of a parent node.
- `binary_tree_insert_right(binary_tree_t *parent, int value)`: Inserts a node as the right child of a parent node.
- `binary_tree_delete(binary_tree_t *tree)`: Deletes the entire binary tree.
- `binary_tree_height(const binary_tree_t *tree)`: Measures the height of a binary tree.

_______________________________________________________________________________________________________________________________________________________________________________________________

# 0x1D. C - Binary trees
A binary tree is a hierarchical data structure where each node has at most two children, which are referred to as the left child and right child. 
The binary tree structure is used to represent relationships where each node points to its child nodes, which may or may not have further child nodes.

### A binary tree is a data structure made up of nodes. Each node contains:
* A value (or data).
* A pointer (or reference) to two child nodes, which are the left child and the right child.

### A binary tree has the following properties:

* Root: The top node of the tree.
* Leaf nodes: Nodes with no children.
*  Subtree: A tree formed by any node and its descendants.

### Basic Operations on Binary Trees
* Insert: Add a node to the tree.
* Search: Find if a value exists in the tree.
* Traversal: Visit all nodes in the tree in a specific order (in-order, pre-order, post-order).
* Delete: Remove a node from the tree.

### What is the Difference Between a Binary Tree and a Binary Search Tree (BST)?
A Binary Search Tree (BST) is a type of binary tree with an additional property: for every node in the tree, the value of the left child is less than the value of the parent node, and the value of the right child is greater than the value of the parent node. This property must be true for all nodes in the tree.

#### Difference:

* Binary Tree: There is no specific ordering between nodes; the structure is simply hierarchical.
* Binary Search Tree (BST): There is a strict ordering property (left < parent < right) that makes searching for a value efficient (logarithmic time complexity in balanced BSTs).
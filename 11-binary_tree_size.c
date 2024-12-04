#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_size - measure the size of a binary tree
 *
 * @tree: the pointer to the root node of the tree to measure the size
 *
 * Return: size or 0 if root is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1, left_tree = 0, right_tree = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_tree = binary_tree_size(tree->left);
	if (tree->right)
		right_tree = binary_tree_size(tree->right);
	size += left_tree + right_tree;

	return (size);
}

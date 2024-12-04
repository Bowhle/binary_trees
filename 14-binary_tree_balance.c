#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - a function that measures the balance factor
 * of a binary tree
 *
 * @tree: pointer to the rot of the tree to measure the balance factor
 *
 * Return: the factor or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, balance = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	balance = left - right;

	return (balance);
}

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: the pointer to root node
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	else
		left_height = 1;

	if (tree->right)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	else
		right_height = 1;

	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}

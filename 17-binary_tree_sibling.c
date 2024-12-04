#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to the node to find the siblings
 *
 * Return: pointer to the sibling node,
 * or NULL if no sibling or invalid input
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->right != node)
		return (node->parent->right);
	return (node->parent->left);
}

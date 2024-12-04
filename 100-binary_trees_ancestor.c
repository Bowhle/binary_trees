#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node,
 *         or NULL if no common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	/* Base case: if either node is NULL, return NULL */
	if (first == NULL || second == NULL)
		return (NULL);

	/* If both nodes are the same, return the current node as LCA */
	if (first == second)
		return ((binary_tree_t *)first);

	/* Recursively search for the ancestor by going up the tree */
	return binary_trees_ancestor(first->parent, second->parent);
}

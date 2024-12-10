#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)  /* If node is NULL, it is not a leaf */
		return (0);

	/* Check if both left and right children are NULL */
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);  /* If the node has children, it's not a leaf */
}


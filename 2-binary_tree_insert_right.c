#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or if parent NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	/* Create the new node */
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	/* If the parent already has a right child, shift it */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/* Link the new node to the parent's right pointer */
	parent->right = new_node;

	return (new_node);
}


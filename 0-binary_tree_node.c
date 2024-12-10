#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);  /* Return NULL if memory allocation fails */

	new_node->n = value;     /* Set the value of the new node */
	new_node->parent = parent; /* Set the parent pointer */
	new_node->left = NULL;    /* Initially, no left child */
	new_node->right = NULL;   /* Initially, no right child */

	return (new_node);  /* Return the pointer to the new node */
}


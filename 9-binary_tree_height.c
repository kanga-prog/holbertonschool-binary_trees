#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree. 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_height;
	size_t right_height;

	if (tree == NULL)  /* Cas de base : arbre vide*/
		return (0);

	/* Calculer la hauteur des sous-arbres gauche et droit*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Retourner la hauteur maximale + 1*/
	return (left_height > right_height ? left_height : right_height) + 1;
}


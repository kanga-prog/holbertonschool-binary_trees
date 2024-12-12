#include "binary_trees.h"

/**
 * check_perfect - Vérifie récursivement si un arbre binaire est parfait.
 * @node: Le nœud actuel de l'arbre.
 * @level: Le niveau actuel du nœud.
 * @tree_height: La hauteur totale de l'arbre.
 *
 * Return: 1 si l'arbre est parfait, sinon 0.
 */
int check_perfect(const binary_tree_t *node, size_t level, size_t tree_height)
{
	if (node == NULL)
		return (1);

	if (node->left == NULL && node->right == NULL)
		return (level == tree_height - 1);

	if (node->left == NULL || node->right == NULL)
		return (0);

	return (check_perfect(node->left, level + 1, tree_height) &&
			check_perfect(node->right, level + 1, tree_height));
}

/**
 * height - Calcule la hauteur de l'arbre binaire.
 * @node: Le nœud de l'arbre pour lequel calculer la hauteur.
 *
 * Return: La hauteur de l'arbre.
 */
size_t height(const binary_tree_t *node)
{
	size_t left_height, right_height;

	if (node == NULL)
		return (0);

	left_height = height(node->left);
	right_height = height(node->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * count_nodes - Compte le nombre de nœuds dans l'arbre binaire.
 * @node: Le nœud de l'arbre pour lequel compter les nœuds.
 *
 * Return: Le nombre total de nœuds dans l'arbre.
 */
size_t count_nodes(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (count_nodes(node->left) + count_nodes(node->right) + 1);
}

/**
 * binary_tree_is_perfect - Vérifie si un arbre binaire est parfait.
 * @tree: L'arbre binaire à vérifier.
 *
 * Return: 1 si l'arbre est parfait, sinon 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tree_height, node_count, expected_nodes;

	if (tree == NULL)
		return (0);

	tree_height = height(tree);
	node_count = count_nodes(tree);
	expected_nodes = (1 << tree_height) - 1;

	if (node_count != expected_nodes)
		return (0);

	return (check_perfect(tree, 0, tree_height));
}


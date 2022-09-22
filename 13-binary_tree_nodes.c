#include "binary_trees.h"

/**
 * binary_tree_nodes - function to count leaf nodes
 * @tree: pointer to the tree to check
 * Return: number of nodes with atleast one child, 0 otherwise
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}

#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function to check if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 on if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (!node->left && !node->right)
		return (1);
	if (node->left)
		binary_tree_is_leaf(node->left);
	if (node->right)
		binary_tree_is_leaf(node->right);
	return (0);
}

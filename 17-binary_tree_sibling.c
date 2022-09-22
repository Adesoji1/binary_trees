#include "binary_trees.h"

/**
 * binary_tree_sibling - function to find the sibling of a node
 * @node: pointer to the sibling node
 * Return: the pointer to the sibling node, else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}

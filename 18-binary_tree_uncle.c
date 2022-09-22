#include "binary_trees.h"

/**
 * binary_tree_uncle - function to find the uncle of a node
 * @node: pointer to the uncle node
 * Return: the pointer to the uncle node, else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}

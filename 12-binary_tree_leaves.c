#include "binary_trees.h"

/**
 * binary_tree_leaves - function to count leaf nodes
 * @tree: pointer to the tree to check
 * Return: number of leaf nodes, 0 otherwise
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		count += 1;
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
}

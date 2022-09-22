#include "binary_trees.h"

/**
 * binary_tree_balance - find if a tree is balanced or not
 * @tree: pointer to the tree
 * Return: -1, 0, 2 accordingly
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
		return (2);
	if (tree->left || tree->right)
		return (-1);
	return (0);
}

#include "binary_trees.h"

/**
 * binary_tree_size - function to find the size of a tree
 * @tree: pointer to the tree
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	binary_tree_t *left_side, *right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	return (left_side - right_side);
}

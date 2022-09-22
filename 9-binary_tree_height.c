#include "binary_trees.h"

/**
 * binary_tree_height - function to find the height of a tree
 * @tree: pointer to the tree
 * Return: height on success, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_L, count_R, height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_L = binary_tree_height(tree->left);
	count_R = binary_tree_height(tree->right);
	if (count_L > count_R)
		height = count_L + 1;
	else
		height = count_R + 1;
	return (height);
}

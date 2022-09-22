#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: pointer to the tree
 * Return: 1 if true, 0 else
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_side, right_side;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if ((left_side == right_side) && (tree->left && tree->right))
		return (1);
	return (0);
}

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

#include "binary_trees.h"

/**
 * binary_tree_depth - function to find the depth of a tree
 * @tree: pointer to the tree
 * Return: depth on success, 0 otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}

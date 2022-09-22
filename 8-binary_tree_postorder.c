#include "binary_trees.h"

/**
 * binary_tree_postorder - function to traverse through a tree using postorder
 * @tree: pointer to the tree
 * @func: function to print the node data
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

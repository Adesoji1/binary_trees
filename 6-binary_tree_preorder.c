#include "binary_trees.h"

/**
 * binary_tree_preorder - function to traverse through a tree using preorder
 * @tree: pointer to the tree
 * @func: function to print the node data
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}

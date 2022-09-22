#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as a right child
 * @parent: pointer to the parent node
 * @value: the value to be assigned to the right_node
 * Return: right_node on success, else return NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->left = right_node->right = NULL;
	right_node->parent = parent;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}

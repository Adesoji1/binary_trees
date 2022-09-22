#include "binary_trees.h"

/**
 * binary_tree_node - function to create a binary tree
 * @parent: pointer to the parent node
 * @value: value to assign to the newNode
 * Return: the newNode on success, else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = newNode->right = NULL;
	return (newNode);
}

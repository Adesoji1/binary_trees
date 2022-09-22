#include "binary_trees.h"

#ifndef CREATE
#define CREATE
/**
 * create_node - creates a new node to be inserted
 * @parent: pointer to the parent
 * @value: value to be stored in the new node
 * Return: the new node
 */
binary_tree_t *create_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}
#endif

/**
 * binary_tree_insert_left - inserts a node as a left child
 * @parent: pointer to the parent node
 * @value: the value to be assigned to the newNode
 * Return: newNode on success, else return NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	left_node = create_node(parent, value);

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		left_node->left->parent = left_node;
	}
	parent->left = left_node;
	return (left_node);
}

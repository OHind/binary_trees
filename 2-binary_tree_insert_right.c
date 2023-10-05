#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - Insert a node as the right child of onother node
 * @parent: The pointer of the node to insert the right-child in
 * @value: The value to store in the new node
 * Return: A pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_right;

	if (parent == NULL)
	{
		return (NULL);
	}
	node_right = binary_tree_node(parent, value);
	if (node_right == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		node_right->right = parent->right;
		parent->right->parent = node_right;
	}
	parent->right = node_right;
	return (node_right);
}

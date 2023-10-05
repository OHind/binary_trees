#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert a node as the left child
 * @parent: The tree to insert into
 * @value: The value to insert
 * Return: The updated node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left;

	if (parent == NULL)
	{
		return (NULL);
	}

	node_left = binary_tree_node(parent, value);
	if (node_left == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)/*if left child already exists for the parent node*/
	{
		node_left->left = parent->left;
		parent->left->parent = node_left;
	}
	parent->left = node_left;
	return (node_left);
}

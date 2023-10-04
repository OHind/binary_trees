#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates binary tree node
 * @parent: the binary tree to add a node to
 * @value: The node to add
 * Return: Return the tree with the node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL){
		return NULL;
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves of tree
 * @tree: The tree to couts its leaves
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t treeLeaf = 0, l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		l = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		treeLeaf = l + r;
		return ((!l && !r) ? treeLeaf + 1 : treeLeaf + 0);
	}
}

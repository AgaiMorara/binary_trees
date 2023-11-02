#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to the root node
 *Return: Number of nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t stale = 0;

	if (!tree)
		return (0);
	stale += (!tree->left && !tree->right) ? 1 : 0;
	stale += binary_tree_leaves(tree->left);
	stale += binary_tree_leaves(tree->right);

	return (stale);
}

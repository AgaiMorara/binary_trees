#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the leaves in a binary tree
 *@tree: pointer to the root node
 *Return: Number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t fertile = 0;

	if (!tree)
		return (0);
	fertile += (tree->left || tree->right) ? 1 : 0;
	fertile += binary_tree_nodes(tree->left);
	fertile += binary_tree_nodes(tree->right);

	return (fertile);
}

#include "binary_trees.h"

/**
 *binary_tree_is_root - checks if a given node is root
 *@node: pointer to the given binary tree
 *Return: 1 if is root... 0 otherwise
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}

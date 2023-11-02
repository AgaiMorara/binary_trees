#include "binary_trees.h"

/**
 *binary_tree_is_root - checks if a given node is root
 *@node: pointer to the given binary tree
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}

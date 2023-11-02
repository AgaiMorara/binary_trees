#include "binary_trees.h"
#inlucde <stdlib.h>

/**
 *binary_tree_is_leaf - checks if a node is a leaf
 *@node: pointer to the node to be checked
 *Return: 1 if node is leaf, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->parent)
		if (!node->right && !node->left)
		return (1);
	return (0);
}

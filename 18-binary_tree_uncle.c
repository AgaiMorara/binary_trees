#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the binary tree uncle of a node
 *@node: pointer to find the uncle
 *
 *Return: pointer to uncle , Null otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandy;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	grandy = node->parent->parent;
	if (grandy->left == node->parent)
		return (grandy->right);
	else
		return (grandy->left);
}

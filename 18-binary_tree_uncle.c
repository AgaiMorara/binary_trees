#include "binary_trees.h"

/**
 *binary_tree_uncle - finds the binary tree uncle of a node
 *@node: pointer to find the uncle
 *
 *Return: pointer to uncle , Null otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandy = node->parent->parent;

	if (!node || !node->parent || !grandy)
		return (NULL);
	if (grandy->left == node->parent)
		return (grandy->right);
	else
		return (grandy->left);
}

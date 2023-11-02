#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_node - creates a binary tree node;
 *@parent: pointer to the parent node of the binary tree
 *@value: value content of the node
 *Return: Pointer to the node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ans;

	ans = malloc(sizeof(binary_tree_t));

	if (!ans)
		return (NULL);

	ans->parent = parent ? parent : NULL;
	ans->n = value;
	ans->left = NULL;
	ans->right = NULL;

	return (ans);
}

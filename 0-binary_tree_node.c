#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_node - creates a binary tree node
 *
 *@value: Integer stored in the node
 *@parent: Pointer to the parent node
 *Return: Pointer to node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ans;

	ans = malloc(sizeof(binary_tree_t));
	(*ans).n = value;
	(*ans).parent = parent;
	(*ans).left = NULL;
	(*ans).right = NULL;

	return (ans);
}

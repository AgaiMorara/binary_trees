#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_left - inserts a node as the left-child of another
 *If parent already has a left-child, the new node must take its place, and
 *the old left-child must be set as the left child of the new node.
 *@parent: pointer to the node to insert the left-child
 *@value: value to store in the new node
 *Return: pointer to created node, Null if failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ans;
	binary_tree_t *temp;

	ans = malloc(sizeof(binary_tree_t));
	if (!ans)
		return (NULL);
	if (parent && parent->left)
	{
		temp = parent->left;
		parent->left = ans;
		ans->left = temp;
		ans->left->parent = ans;
	}
	else
	{
		if (!parent)
			return (NULL);
		parent->left = ans;
	}
/* allocate remaining slots of ans */
		ans->right = NULL;
		ans->parent = parent;
		ans->n = value;
		return (ans);
}

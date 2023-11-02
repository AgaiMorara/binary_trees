#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left child of another.
 * If parent already has a left child, the new node takes its place, and
 * the old left child becomes the left child of the new node.
 * @parent: Pointer to the node to insert the left child.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, NULL if failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ans = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);

	if (!ans)
		return (NULL);

	ans->parent = parent ? parent : NULL;
	ans->n = value;
	ans->left = NULL;
	ans->right = NULL;

	if (parent->left)
	{
		ans->left = parent->left;
		ans->left->parent = ans;
	}

	parent->left = ans;

	return (ans);
}

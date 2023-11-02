#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - Inserts a node as the left child of another.
 * If parent already has a left child, the new node takes its place, and
 * the old left child becomes the left child of the new node.
 * @parent: Pointer to the node to insert the left child.
 * @value: Value to store in the new node.
 * Return: Pointer to the created node, NULL if failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right)
	{
		ans->right = parent->right;
		ans->right->parent = ans;
	}

	parent->right = ans;

	return (ans);
}

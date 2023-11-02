#include  "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *if right child exists - make it right child of new node
 *@parent: pointer to the node to insert in right-child
 *@value: value to store in the new node
 *
 */
binarty_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ans;
	binary_tree_t *temp;

	ans = malloc(sizeof(binary_tree_t));
	if (!ans)
		return (NULL);
	if (parent->right)
	{
		temp = parent->right;
		parent->right = ans;
		ans->right = temp;
	}
	else
		parent->right = ans;
	/* allocate remaining slots of ans */
	ans->left = NULL;
	ans->parent = parent;
	ans->n = value;

	return (ans);
}

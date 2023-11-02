#include "binary_trees.h"

/**
 *void binary_tree_postorder - goes throug a binary tree using in-order
 *@tree: pointer to the tree
 *@func: function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

#include "binary_trees.h"

/**
 *void binary_tree_preorder - goes throug a binary tree using pre-order
 *@tree: pointer to the tree
 *@func: function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

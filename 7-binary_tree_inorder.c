#include "binary_trees.h"

/**
 *void binary_tree_inorder - goes throug a binary tree using in-order
 *@tree: pointer to the tree
 *@func: function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}

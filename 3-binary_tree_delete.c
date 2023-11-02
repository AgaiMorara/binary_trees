#include "binary_trees.h"
#include <stdlib.h>

/**
 *binary_tree_delete - deletes all the nodes in a binary tree
 *@tree: pointer to the tree to be deleted.
 *if tree is null, does nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}

#include "binary_trees.h"

/**
 *binary_tree_depth - measuares the depth of a node
 *@tree: pointer to the root node
 *Return: depth or 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
        return 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

    return depth;
}

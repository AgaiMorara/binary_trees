#include "binary_trees.h"

/**
 *height - height of a binary tree
 *@tree: pointer to the tree
 *Return: height
 */

size_t height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: pointer to the root
 *Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t left_height = height(tree->left);
	size_t right_height = height(tree->right);

	return ((int) (left_height - right_height));
}

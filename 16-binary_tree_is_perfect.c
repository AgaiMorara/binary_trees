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
 *binary_tree_is_perfect - checks wether a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *Return: 0 if tree is NULL,  1 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;


	if (!tree)
		return (0);

	height_left = height(tree->left);
	height_right = height(tree->right);

	if (height_left != height_right)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
	return (0);
}

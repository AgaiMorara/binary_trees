#include "binary_trees.h"
/**
 *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *@first - pointer to the first node
 *@second - pointer to the second node
 *Returh: pointer to the lowest common ancestor
 */

binary_tree_t *binary_tree_ancestor(const binary_tree_t *first,
				    const binary_tee_t *second)
{
	const binary_tree_t *temp;
	size_t depth_f = 0, depth_s = 0;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *) first);
	temp = first;

	while (temp)
	{
		depth_f ++;
		temp = temp->parent;
	}

	temp = second;
	while (temp)
	{
		depth_s++;
		temp = temp->parent;
	}

	while(depth_f > depth_s)
	{
		first = first->parent;
		depth_first--;
	}

	while (depth_s > depth_f)
	{
		second = second->parent;
		depth_second--;
	}

	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}

	return (binary_tree_t *) first;
}

#include "binary_trees.h"

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	const binary_tree_t *f = first, *s = second;

	if (!first || !second)
		return (NULL);

	while (f != s)
	{
		f = f ? f->parent : second;
		s = s ? s->parent : first;
	}

	return (binary_tree_t *)f;
}

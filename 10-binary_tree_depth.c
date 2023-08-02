#include "binary_trees.h"
/**
 * binary_tree_depth - function to measure the depth of node
 * in a binary try
 * @tree: A pointer to node to measure the depth
 * Return: depth or NULL or 0 on failure
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = 0;

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

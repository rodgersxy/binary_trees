#include "binary_trees.h"
/**
 * binary_tree_depth - function to measure the depth of node
 * in a binary try
 * @tree: A pointer to node to measure the depth
 * Return: Depth of the node, or 0 on failure or if the node is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}

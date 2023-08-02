#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node
 * is a root
 * @node: Is a pointer to node to check
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	/*condition if node not NULL and has no parent*/
	if (node && !node->parent)
		return (1);

	return (0);
}

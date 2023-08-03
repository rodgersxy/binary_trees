#include "binary_trees.h"
/**
 * binary_tree_sibling - Function to Finds the sibling of a node
 * @node: Pointer to the node to find the sibling.
 *
 * Return: A pointer to the sibling node or NULL if the node is NULL
 * , parent or the node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/*checks if either node or the parent is NULL*/
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/*checks if the node is the left child of its parent*/
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}

	return (node->parent->left);
}

/**
 * binary_tree_uncle - function to find the unclde of the node
 * @node: Is a pointer to the node to find the uncle
 * Return: A poinetr to the uncle node or NULL if node is NULL/no unlce
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	/*checks if the node has parenyts and grandparent*/
	if (node->parent != NULL && node->parent->parent != NULL)
		return (binary_tree_sibling(node->parent));

	return (NULL);
}

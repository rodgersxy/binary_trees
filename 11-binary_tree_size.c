#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer root node of the tree to measure
 * Return: if tree is NULL return 0 else size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	/*sum of left and right subtrees*/
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size + 1);
}

#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if the binary tree is full
 * @tree: Pointer to the root node to check
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*If the tree is empty (no nodes), it is considered full*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}

#include "binary_trees.h"
/**
 * binary_tree_height - Function to measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	left += 1 + binary_tree_height(tree->left);
	right += 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor of the binary tree, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

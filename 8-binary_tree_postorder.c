#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: a pointer to function to cal each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/*recursivel call to left sub,right then curent node*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

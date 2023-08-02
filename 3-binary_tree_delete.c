#include "binary_trees.h"
/**
 * binary_tree_delete - A function that deletes entire binary
 * tree
 * @tree - binary tree
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	
	/*post-order traversal to delete the tree*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/*free memory*/
	free(tree);
}

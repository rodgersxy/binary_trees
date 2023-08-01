#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node as the right
 * child of the parent node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or
 * if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/*declare temp and new_node and initialize to NULL*/
	binary_tree_t *temp = NULL;
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		temp = parent->right;
		parent->right = new_node;
		temp->parent = new_node;
	}

	else
		parent->right = new_node;

	return (new_node);
}

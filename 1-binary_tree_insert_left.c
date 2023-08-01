#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a new node as the left
 * child of the parent node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = NULL;
	binary_tree_t *new_node = NULL;


	if (parent == NULL)
		return (NULL);
	/*allocation of memory*/
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = parent;

	/*checks if parent node has a left child*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		temp = parent->left;
		parent->left = new_node;
		temp->parent = new_node;
	}
	else
		parent->left = new_node;
	
	return (new_node);
}


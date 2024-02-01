#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as the right-child of another node
 * @parent: pointer to the node ot insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child_node = NULL;

	if (parent == NULL)
		return (NULL);
	new_right_child_node = malloc(sizeof(binary_tree_t));

	if (new_right_child_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right_child_node->right = parent->right;
		parent->right->parent = new_right_child_node;
		new_right_child_node->left = NULL;
	}
	else
	{
		new_right_child_node->right = NULL;
		new_right_child_node->left = NULL;
	}
	new_right_child_node->n = value;
	new_right_child_node->parent = parent;
	parent->right = new_right_child_node;

	return (new_right_child_node);
}

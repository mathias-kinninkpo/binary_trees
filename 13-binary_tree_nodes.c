#include "binary_trees.h"

/**
 * __binary_tree_nodes - count the nodes with at least 1 child in a binary tree
 * Private function
 * @tree: pointer to the root node of the tree to count th number of leaves
 * Return: the number of nodes or 0 if tree is NULL
 */
size_t __binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right = 0;

	if (tree == NULL)
		return (0);
	leaves_left = __binary_tree_nodes(tree->left);
	leaves_right = __binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + leaves_left + leaves_right);
	return (0);
}

/**
 * binary_tree_nodes - count the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count th number of leaves
 * Return: the number of node or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (__binary_tree_nodes(tree));
}

#include "binary_trees.h"

/**
 * __binary_tree_height - measure the height of a binary tree
 * Private function
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height o if tree is NULL
 */
size_t __binary_tree_height(const binary_tree_t *tree)
{
	size_t max, left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = __binary_tree_height(tree->left);
	right_height = __binary_tree_height(tree->right);
	max = (left_height >= right_height) ? left_height : right_height;
	return (max + 1);
}

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height o if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (__binary_tree_height(tree) - 1);
}

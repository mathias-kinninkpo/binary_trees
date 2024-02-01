#include "binary_trees.h"

/**
 * __binary_tree_size - measure the size of a binary tree
 * Private function
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the tree of 0 if tree is NULL
 */
size_t __binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left = 0, size_right = 0;

	if (tree == NULL)
		return (0);
	size_left = __binary_tree_size(tree->left);
	size_right = __binary_tree_size(tree->right);
	return (1 + size_left + size_right);
}

/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of the tree of 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (__binary_tree_size(tree));
}

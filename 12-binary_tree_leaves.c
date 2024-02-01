#include "binary_trees.h"

/**
 * __binary_tree_leaves - count the leaves in a binary tree
 * Private function
 * @tree: pointer to the root node of the tree to count th number of leaves
 * Return: the number of leaves of 0 if tree is NULL
 */
size_t __binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left = 0, leaves_right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	leaves_left = __binary_tree_leaves(tree->left);
	leaves_right = __binary_tree_leaves(tree->right);

	return (leaves_left + leaves_right);
}

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count th number of leaves
 * Return: the number of leaves of 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (__binary_tree_leaves(tree));
}

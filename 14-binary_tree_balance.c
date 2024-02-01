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

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure th balance factor
 * Return: the balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		lheight = 1 + binary_tree_height(tree->left);
	if (tree->right)
		rheight = 1 + binary_tree_height(tree->right);
	return (lheight - rheight);
}

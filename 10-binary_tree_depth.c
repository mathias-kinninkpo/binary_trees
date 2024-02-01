#include "binary_trees.h"


/**
 * __binary_tree_depth - measure the depth of a node in a binary tree
 * Private function
 * @tree: pointer to the node to measure the depth
 * Return: the depth of tree of o if tree is NULL
 */
size_t __binary_tree_depth(const binary_tree_t *tree)
{
	while (tree->parent != NULL)
		return (1 + __binary_tree_depth(tree->parent));
	return (0);
}

/**
 * binary_tree_depth - measure the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: the depth of tree of o if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (__binary_tree_depth(tree));
}

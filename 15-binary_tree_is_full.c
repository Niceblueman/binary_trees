#include "binary_trees.h"

/**
 * is_full_recursive - it check of the binary trre if fuul or emty
 * @the_tree: its the pointer to the root node
 *
 * Return: if the tree NUll or the function return zero or 1.
 */
int is_full_recursive(const binary_tree_t *the_tree)
{
	if (the_tree != NULL)
	{
		if ((the_tree->left != NULL && the_tree->right == NULL) ||
		    (the_tree->left == NULL && the_tree->right != NULL) ||
		    is_full_recursive(the_tree->left) == 0 ||
		    is_full_recursive(the_tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @the_tree: A pointer to the root node of the tree to check.
 *
 * Return: if the tree NUll or the function return zero or one.
 */
int binary_tree_is_full(const binary_tree_t *the_tree)
{
	if (the_tree == NULL)
		return (0);
	return (is_full_recursive(the_tree));
}

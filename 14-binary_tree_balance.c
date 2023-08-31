#include "binary_trees.h"

/**
 * binary_tree_balance - it return the balance of the binary tree
 * @the_tree: its the pointer to the root node
 *
 * Return: if the tree NUll or the function return zero.
 */
int binary_tree_balance(const binary_tree_t *the_tree)
{
	if (the_tree)
		return (binary_tree_height(the_tree->left) - binary_tree_height(the_tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary the_tree.
 * @the_tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *the_tree)
{
	if (the_tree)
	{
		size_t left = 0, right = 0;

		left = the_tree->left ? 1 + binary_tree_height(the_tree->left) : 1;
		right = the_tree->right ? 1 + binary_tree_height(the_tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}

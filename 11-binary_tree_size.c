#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @the_tree: its the pointer to the root node
 *
 * Return: it return the size of the binary tree.
 */
size_t binary_tree_size(const binary_tree_t *the_tree)
{
	size_t x = 0;

	if (the_tree)
	{
		x += 1;
		x += binary_tree_size(the_tree->left);
		x += binary_tree_size(the_tree->right);
	}
	return (x);
}

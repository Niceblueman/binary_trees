#include "binary_trees.h"

/**
 * binary_tree_height - its mesure the cost of the binary tree.
 * @the_tree: its the pointer to the root node
 *
 * Return: if the tree NUll or the function return zero.
 */
size_t binary_tree_height(const binary_tree_t *the_tree)
{
	if (the_tree)
	{
		size_t l = 0, r = 0;

		l = the_tree->left ? 1 + binary_tree_height(the_tree->left) : 0;
		r = the_tree->right ? 1 + binary_tree_height(the_tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}

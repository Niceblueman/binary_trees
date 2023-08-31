#include "binary_trees.h"

/**
 * binary_tree_nodes - it count the number of childs in the binary tree
 * @the_tree: its the pointer to the root node
 *
 * Return: if the tree NUll or the function return zero.
 */
size_t binary_tree_nodes(const binary_tree_t *the_tree)
{
	size_t x = 0;

	if (the_tree)
	{
		x += (the_tree->left || the_tree->right) ? 1 : 0;
		x += binary_tree_nodes(the_tree->left);
		x += binary_tree_nodes(the_tree->right);
	}
	return (x);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - it Measure the layers of the node in the binary tree.
 * @the_tree: its the pointer to the root node
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *the_tree)
{
	return ((the_tree && the_tree->parent) ? 1 + binary_tree_depth(the_tree->parent) : 0);
}

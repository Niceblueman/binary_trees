#include "binary_trees.h"

/**
 * binary_tree_postorder - go to the universal binary tree and result
 * @the_tree: its the pointer to the root node
 * @the_fn: its the pointers of the functions of each tree
 */
void binary_tree_postorder(const binary_tree_t *the_tree, void (*the_fn)(int))
{
	if (the_tree && the_fn)
	{
		binary_tree_postorder(the_tree->left, the_fn);
		binary_tree_postorder(the_tree->right, the_fn);
		the_fn(the_tree->n);
	}
}

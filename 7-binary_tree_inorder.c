#include "binary_trees.h"

/**
 * binary_tree_inorder 
 * @the_tree: its the pointer to the root node
 * @the_fn: its the pointers of the functions of each tree
 */
void binary_tree_inorder(const binary_tree_t *the_tree, void (*the_fn)(int))
{
	if (the_tree && the_fn)
	{
		binary_tree_inorder(the_tree->left, the_fn);
		the_fn(the_tree->n);
		binary_tree_inorder(the_tree->right, the_fn);
	}
}

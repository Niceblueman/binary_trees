#include "binary_trees.h"

/**
 * binary_tree_delete - for Delete the binary tree.
 * @the_tree: the pointer to root node of the tree that will be deleted.
 */
void binary_tree_delete(binary_tree_t *the_tree)
{
	if (the_tree != NULL)
	{
		binary_tree_delete(the_tree->left);
		binary_tree_delete(the_tree->right);
		free(the_tree);
	}
}

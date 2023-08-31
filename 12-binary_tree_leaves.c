#include "binary_trees.h"

/**
 * binary_tree_leaves -it count the leaves in the binary tree.
 * @the_tree: its the pointer to the root node
 *
 * Return: it return number of the leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}

#include "binary_trees.h"

/**
 * bst_search - Searches for a value in a binary search tree.
 * @tree: its the pointer to the root node
 * @value: this value to search for it in the binary search tree.
 *
 * Return: if the tree NUll or the function return zero or 1.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}

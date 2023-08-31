#include "binary_trees.h"

/**
 * binary_tree_sibling - this funtion find the sibling of the binary tree
 * @node: the pointer to  node for find the sibling of it.
 *
 * Return: if the tree NUll or the function return zero or 1.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

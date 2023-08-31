#include "binary_trees.h"

/**
 * binary_tree_is_root - it check if the node is the root of the binary tree.
 * @the_node: A pointer to the node to check.
 *
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *the_node)
{
	if (the_node == NULL || the_node->parent != NULL)
		return (0);

	return (1);
}

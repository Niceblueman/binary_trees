#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts the node like a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the created node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the created node.
 *
 * Description: If parent already has a left-child, the created node
 *              takes its place and the old left-child is set as
 *              the left-child of the created  node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *_n_v;

	if (parent == NULL)
		return (NULL);

	_n_v = binary_tree_node(parent, value);
	if (_n_v == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		_n_v->left = parent->left;
		parent->left->parent = _n_v;
	}
	parent->left = _n_v;

	return (_n_v);
}

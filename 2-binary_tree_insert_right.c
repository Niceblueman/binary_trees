#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another node.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer .
 *
 * Description: If parent already has a right-child, the created node
 *              takes its place and the older right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *_n_v;

	if (parent == NULL)
		return (NULL);

	_n_v = binary_tree_node(parent, value);
	if (_n_v == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		_n_v->right = parent->right;
		parent->right->parent = _n_v;
	}
	parent->right = _n_v;

	return (_n_v);
}

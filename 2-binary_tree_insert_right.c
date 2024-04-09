#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert into the right
 * @parent: parent or root node
 * @value: value of the new node
 *
 * Return: NULL if parent no exist or fail to create new,
 *      pointer to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		temp = parent->right;
		new->right = temp;
		temp->parent = new;
	}
	parent->right = new;
	return (new);
}

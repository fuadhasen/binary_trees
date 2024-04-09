#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert into the left
 * @parent: parent or root node
 * @value: value of the new node
 *
 * Return: NULL if parent no exist or fail to create new,
 *	pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp, *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = parent->left;
		new->left = temp;
		temp->parent = new;
	}
	parent->left = new;
	return (new);
}

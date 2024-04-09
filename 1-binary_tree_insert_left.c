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
	binary_tree_t *temp = NULL;
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL || parent == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;

	if (parent->left != NULL)
	{
		temp = parent->left;
		temp->parent = new;
		new->left = temp;
		new->right = NULL;
		parent->left = new;
	}
	else
	{
		new->left = NULL;
		parent->left = new;
		new->right = NULL;
	}
	return (new);
}

#include "binary_trees.h"

/**
 * binary_tree_node - function that create new node
 * @parent: parent node of the newly created child node
 * @value: value of the new node
 *
 * Return: NULL if fail, or Pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

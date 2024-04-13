#include "binary_trees.h"

/**
 * binary_tree_sibling - to find sibiling
 * @node: pointer to the node
 *
 * Return: NULL if not found or pointer to sibiling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left != NULL &&	parent->right != NULL)
	{
		if (parent->left == node)
			return (parent->right);
		else
			return (parent->left);
	}
	else
		return (NULL);
}

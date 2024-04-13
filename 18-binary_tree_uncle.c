#include "binary_trees.h"

/**
 * binary_tree_uncle - to find uncle of the node
 * @node: pointer to the node
 *
 * Return: uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *leyla, *murad;

	if (node == NULL)
		return (NULL);

	leyla = node->parent;
	murad = binary_tree_sibling(leyla);
	if (murad == NULL)
		return (NULL);
	else
		return (murad);
}

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
	if (parent->left != NULL && parent->right != NULL)
	{
		if (parent->left == node)
			return (parent->right);
		else
			return (parent->left);
	}
	else
		return (NULL);
}

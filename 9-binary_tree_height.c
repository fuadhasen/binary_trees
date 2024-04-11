#include "binary_trees.h"

/**
 * binary_tree_height - to measure the height of the Bt-height
 * @tree: pointer to the root node
 *
 * Return: Height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_len, right_len;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_len = binary_tree_height(tree->left);
	right_len = binary_tree_height(tree->right);

	if (left_len > right_len)
		return (left_len + 1);
	else
		return (right_len + 1);

}

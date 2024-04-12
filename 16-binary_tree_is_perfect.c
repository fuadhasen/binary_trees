#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function to measure the perfectnes of Binary tree
 * @tree: pointer to the root node
 *
 * Return: full 1 or 0 if not full
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, left_ht, right_ht;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_ht = binary_tree_height(tree->left);
	right_ht = binary_tree_height(tree->right);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left == right && left_ht == right_ht)
		return (left);
	else
		return (0);
}

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
		return (1);

	left_len = binary_tree_height(tree->left);
	right_len = binary_tree_height(tree->right);

	if (left_len > right_len)
		return (left_len + 1);
	else
		return (right_len + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_is_full - function to measure the fullnes of BiNARY tree
 * @tree: pointer to the root node
 *
 * Return: full 1 or 0 if not full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left == right)
		return (left);
	else
		return (0);
}

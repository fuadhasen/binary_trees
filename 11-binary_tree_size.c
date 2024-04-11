#include "binary_trees.h"

/**
 * binary_tree_size - to measure the size of node in Btree
 * @tree: pointer to the  node that needed to be measured
 *
 * Return: size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_nodes, right_nodes, size;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);
	size = left_nodes + right_nodes;

	return (size + 1);
}

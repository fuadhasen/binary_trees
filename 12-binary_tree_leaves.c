#include "binary_trees.h"

/**
 * binary_tree_leaves - to count the leaves of Btree
 * @tree: pointer to the  node that needed to be measured
 *
 * Return: size of the binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_nodes, right_nodes, leaf_num;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_nodes = binary_tree_leaves(tree->left);
	right_nodes = binary_tree_leaves(tree->right);
	leaf_num = left_nodes + right_nodes;

	return (leaf_num);
}

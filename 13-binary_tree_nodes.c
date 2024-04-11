#include "binary_trees.h"

/**
 * binary_tree_nodes - to count the nodes of Btree atleast one child
 * @tree: pointer to the  node that needed to be measured
 *
 * Return: size of the binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_nodes, right_nodes, node_num;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);
	node_num = left_nodes + right_nodes;

	return (node_num + 1);
}

#include "binary_trees.h"

/**
 * binary_tree_depth - to measure the depth of node in Btree
 * @tree: pointer to the  node that needed to be measured
 *
 * Return: depth of the binary tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}

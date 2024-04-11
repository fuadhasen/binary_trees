#include "binary_trees.h"

/**
 * binary_tree_height - to measure the height of the Bt-height
 * 		by calculating height of left and right subtree
 * 		separately. then their difference is Bf.
 * @tree: pointer to the root node
 *
 * Return: Height of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bt_height(tree->left) - bt_height(tree->right));
}

/**
 * bt_height - to measure the height
 * @tree: pointer to root the node
 *
 * Return: height of the tree
 */

size_t bt_height(const binary_tree_t *tree)
{
	int left_ht, right_ht;

	if (tree == NULL)
		return (0);
 
	if (tree->left == NULL && tree->right == NULL)
		return (0);
 
	left_ht = bt_height(tree->left);
	right_ht = bt_height(tree->right);
 
	if (left_ht > right_ht)
		return (left_ht + 1);
	else
		return (right_ht + 1);
}

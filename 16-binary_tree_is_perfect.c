#include "binary_trees.h"

/**
 * binary_tree_perfect - this function test if a binary tree is prefect
 * @tree: pointer to the root node of the tree to check
 * @d: depth of the tree
 * Return: 1 or 0
 */

int  binary_tree_perfect(const binary_tree_t *tree, int d)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == 0);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_perfect(tree->left, d -  1) &&
			binary_tree_perfect(tree->right, d - 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = binary_tree_depth(tree);

	return  (binary_tree_perfect(tree, d));
}

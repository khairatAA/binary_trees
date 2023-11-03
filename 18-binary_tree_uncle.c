#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: return a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}

	if (node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}

	temp = binary_tree_uncle(node->parent->parent->left);
	if (temp != NULL)
		return (temp);

	temp = binary_tree_uncle(node->parent->parent->right);

	return (temp);
}

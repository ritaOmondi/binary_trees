#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if node is NULL,
 *         node has no parent, node has no grandparent, or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);
return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - Function that finds the sibling of a node
 * @node: Pointer tot the sibling node
 * Return: A node's sibling or 0 if null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}


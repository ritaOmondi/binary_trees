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

binary_tree_t *grandparent = node->parent->parent;
if (grandparent->left == node->parent)
{
if (grandparent->right != NULL)
return (grandparent->right);
}
else if (grandparent->right == node->parent)
{
if (grandparent->left != NULL)
return (grandparent->left);
}

return (NULL);
}

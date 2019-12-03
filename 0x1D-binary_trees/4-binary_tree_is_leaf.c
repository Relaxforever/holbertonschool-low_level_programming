#include "binary_trees.h"
/**
 *  binary_tree_is_leaf - checks if a node is a leaf or a root
 * @node: the node of the point
 * Return: 0 if not, 1 if it is
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		if (node->parent != NULL)
		{
			return (1);
		}
	}
	return (0);
}

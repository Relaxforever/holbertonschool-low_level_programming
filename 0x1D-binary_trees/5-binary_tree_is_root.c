#include "binary_trees.h"
/**
 *  binary_tree_is_root - checks if a node is a leaf or a root
 * @node: the node
 * Return: 0 if not, 1 if it is
 */
int binary_tree_is_root(const binary_tree_t *node)
{
		if (node->parent == NULL)
		{
			return (1);
		}
	return (0);
}

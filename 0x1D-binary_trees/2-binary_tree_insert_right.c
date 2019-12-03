#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node in the right of the Trees
 * @parent: the father of the node
 * @value: the value of the function
 * Return: the pointer to the created node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *old;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = new;
		new->parent = parent;
		new->left = NULL;
		new->right = NULL;
		new->n = value;
		return (new);
	}
	old = parent->right;
	new->parent = parent;
	parent->right = new;
	old->parent = new;
	new->right = old;
	new->left = NULL;
	new->n = value;
	return (new);
}

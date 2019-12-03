#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node in the left of the Trees
 * @parent: the father of the node
 * @value: the value of the function
 * Return: the pointer to the created node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *old;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new;
		new->parent = parent;
		new->right = NULL;
		new->left = NULL;
		new->n = value;
		return (new);
	}
	old = parent->left;
	new->parent = parent;
	parent->left = new;
	old->parent = new;
	new->left = old;
	new->right = NULL;
	new->n = value;
	return (new);
}

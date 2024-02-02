#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree node
 * @parent: a pointer to the parent node of the node created
 * @value: the value to put in the new node
 * Return: a pointer to the new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new = (binary_tree_t*)malloc(sizeof(binary_tree_t));
    new->n = value;
    new->left = NULL;
    new->right = NULL;
    new->parent = parent;
    return new;
}

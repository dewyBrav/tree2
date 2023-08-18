#include "tree.h"

tree_t *init(type_data data)
{
    tree_t *newTree = (tree_t *)malloc(sizeof(tree_t));
    if (!newTree)
    {
        printf("Не удалось выделить память!\n");
        return NULL;
    }

    newTree->data = data;
    newTree->left = newTree->right = NULL;
    // printf("Инициализация прошла успешно!\n");
    return newTree;
}

tree_t *insert(type_data data, tree_t *tree)
{

    if (tree == NULL)
    {
        return init(data);
    }

    data < tree->data ? (tree->left = insert(data, tree->left)) : (tree->right = insert(data, tree->right));

    /*  else if (data < tree->data)

          tree->left = insert(data, tree->left);
      else tree->right = insert(data, tree->right);
  */
    return (tree);
}

void freemem(tree_t *tree)
{
    if (tree != NULL)
    {
        freemem(tree->left);
        freemem(tree->right);
        free(tree);
    }
}

void treePrefixPrint(tree_t *tree)
{
    if (tree == NULL)
    {
        return;
    }
    else
    {
        printf("%d ", tree->data);
        treePrefixPrint(tree->left);
        treePrefixPrint(tree->right);
    }
}

void treeInfixPrint(tree_t *tree)
{

    if (tree == NULL)
    {
        return;
    }
    else
    {
        treeInfixPrint(tree->left);
        printf("%d ", tree->data);
        treeInfixPrint(tree->right);
    }
}

void treePostFixPrint(tree_t *tree)
{

    if (tree == NULL)
    {
        return;
    }
    else
    {
        treePostFixPrint(tree->left);
        treePostFixPrint(tree->right);
        printf("%d ", tree->data);
    }
}

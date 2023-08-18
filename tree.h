#ifndef _TREE_H
#define _TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef int type_data;

typedef struct binatyTree
{
    struct binatyTree *left;
    struct binatyTree *right;
    type_data data;
} tree_t;

// способы обхода
// префиксная/прямом порядке(сверху вниз) ABC
// инфиксная/в симетричном порядке(с лева на право) BAC
// постфиксная/в обратном порядке(снизу вверх) BCA

tree_t *init();
tree_t *insert(type_data data, tree_t *tree);
//free()
void freemem(tree_t *tree);

void treePrefixPrint(tree_t *tree);
void treeInfixPrint(tree_t *tree);
void treePostFixPrint(tree_t *tree);

//реализовать
// search(по способу обхода)??
//

#endif
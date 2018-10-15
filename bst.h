#ifndef C_BST_H
#define C_BST_H

#define boolean int
#define true 1
#define false 0

typedef struct Node tree_node;

struct Node {
    int value;
    struct Node *left, *right;
};

tree_node *createNode(int item);

tree_node *insert(tree_node *node, int key);

void print(tree_node *node);

void search(tree_node *node, int value);

tree_node *delete(tree_node *node, int value);

#endif //C_BST_H

#ifndef C_BST_H
#define C_BST_H

#define boolean int
#define true 1
#define false 0

#define LEFT_NODE (-1)
#define RIGHT_NODE 1
#define ROOT 0

typedef struct Node tree_node;

struct Node {
    int value;
    int position;

    struct Node *left, *right;
};

tree_node *createNode(int item);

tree_node *insert(tree_node *node, int key);

void print(tree_node *node);

tree_node *search(tree_node *node, int value);

tree_node *delete(tree_node *node, int value);

#endif //C_BST_H

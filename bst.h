#ifndef C_BST_H
#define C_BST_H

#define boolean int
#define true 1
#define false 0

struct Node {
    int value;
    struct Node *left, *right;
};

struct Node *createNode(int item);

struct Node *insert(struct Node *node, int key);

void print(struct Node *node);

void search(struct Node *node, int value);

struct Node *delete(struct Node *node, int value);

#endif //C_BST_H

#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

struct Node *createNode(int item) {
    struct Node *temp = (struct Node *) malloc(sizeof(struct Node));
    temp->value = item;
    temp->left = NULL;
    temp->right = NULL;
    printf("inserted\n");
    return temp;
}

struct Node *insert(struct Node *node, int key) {
    if (node == NULL) {
        node = createNode(key);
        return node;
    }

    if (key < node->value) {
        node->left = insert(node->left, key);
    } else if (key > node->value) {
        node->right = insert(node->right, key);
    } else {
        printf("duplicate\n");
    }

    return node;
}

void print(struct Node *node) {
    if (node == NULL) {
        printf("");
    } else {
        int value = node->value;
        if (node->left != NULL) {
            printf("(");
            // recursive left tree
            print(node->left);
            printf(")");
        }

        // middle number
        printf("%d", value);

        if (node->right != NULL) {
            printf("(");
            // recursive right tree
            print(node->right);
            printf(")");
        }
    }
}

void search(struct Node *node, int value) {
    boolean found = false;
    while (node != NULL) {
        printf("value = %d\n", value);
        if (value < node->value) {
            node = node->left;
        } else if (value > node->value) {
            node = node->right;
        } else {
            found = true;
            break;
        }
    }

    if (found) {
        printf("present\n");
    } else {
        printf("absent\n");
    }
}

struct Node *delete(struct Node *node, int value) {
    while (node != NULL) {
        if (value < node->value) {
            node = node->left;
        } else if (value > node->value) {
            node = node->right;
        } else {
            // start delete
            if (node->left == NULL && node->right == NULL) {
                // no children
                node = NULL;
            } else if (node->left == NULL || node->right == NULL) {
                if (node->left != NULL) {
                    // no right child
                    node = node->left;
                } else {
                    // no left child
                    node = node->right;
                }
            } else {
                // find the largest number in left tree recursively
                delete(node->left, value);
            }
        }
    }

    return node;
}


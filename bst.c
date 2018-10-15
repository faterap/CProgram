#include<stdio.h>
#include<stdlib.h>

#include "bst.h"

tree_node *createNode(int item) {
    tree_node *temp = (tree_node *) malloc(sizeof(tree_node));
    temp->value = item;
    temp->left = NULL;
    temp->right = NULL;
    printf("inserted\n");
    return temp;
}

tree_node *insert(tree_node *node, int key) {
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

void print(tree_node *node) {
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

tree_node *search(tree_node *node, int value) {
    tree_node *tmp = NULL;
    while (node != NULL) {
        if (value < node->value) {
            node = node->left;
        } else if (value > node->value) {
            node = node->right;
        } else {
            tmp = node;
            break;
        }
    }
    return tmp;
}

tree_node *delete(tree_node *node, int value) {
    while (node != NULL) {
        tree_node *parent = node;
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


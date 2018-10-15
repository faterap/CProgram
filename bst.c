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
    boolean found = false;
    while (node != NULL) {
        if (value < node->value) {
            tmp = node;
            node = node->left;
        } else if (value > node->value) {
            tmp = node;
            node = node->right;
        } else {
            found = true;

            if (tmp == NULL) {
                tmp = node;
                tmp->position = ROOT;
            }

            // return parent node if target found
            break;
        }
    }

    if (found) {
        return tmp;
    } else {
        return NULL;
    }
}

tree_node *delete(tree_node *node, int value) {
    tree_node *parent = search(node, value);
    tree_node *target = NULL;

    if (parent == NULL) {
        // target node not found
        printf("absent\n");
        return NULL;
    }

    // find target node
    if (parent->left != NULL && parent->left->value == value) {
        target = parent->left;
        target->position = LEFT_NODE;
    } else if (parent->right != NULL && parent->right->value == value) {
        target = parent->right;
        target->position = RIGHT_NODE;
    } else if (parent->position == ROOT && parent->value == value) {
        // root node
        target = parent;
    } else {
        return node;
    }

    if (target->left == NULL && target->right == NULL) {
        // leaf node
        if (target->position == LEFT_NODE) {
            parent->left = NULL;
        } else if (target->position == RIGHT_NODE) {
            parent->right = NULL;
        } else if (target->position == ROOT) {
            node = NULL;
        }
        free(target);
    } else if (target->left == NULL) {
        // no left tree
        parent->right = target->right;
        free(target);
    } else if (target->right == NULL) {
        // no right tree
        parent->left = target->left;
        free(target);
    } else {
        // left tree and right tree exists, find the largest number in the left tree.
        tree_node *tmp = target->left;
        while (tmp->right != NULL) {
            parent = tmp;
            tmp = tmp->right;
        }

        target->value = tmp->value;
        parent->right = NULL;
        free(tmp);
    }

    printf("deleted\n");
    return node;
}


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include "std.h"

struct l_node *create_l_node(double value) {
    struct l_node *temp = malloc(sizeof(struct l_node));
    temp->value = value;
    temp->next = NULL;
    return temp;
}

struct l_node *insert_l_node(struct l_node *list, double value) {
    struct l_node *new_node = create_l_node(value);
    if (list == NULL) {
        return new_node;
    }

    while (list->next != NULL) {
        list = list->next;
    }

    list->next = new_node;
    return list;
}

int get_count(struct l_node *node) {
    int count = 0;
    while (node != NULL) {
        count++;
        node = node->next;
    }
    return count;
}

int get_average(struct l_node *node) {
    int count = get_count(node);
    double sum = 0;

    while (node != NULL) {
        sum += node->value;
        node = node->next;
    }

    double temp = sum / count;
    int average = (int) (temp + 0.5);

    return average;
}

int get_deviation(struct l_node *node) {
    int average = get_average(node);
    int count = get_count(node);
    int deviation = 0;
    double sum = 0;

    if (count == 0) {
        return deviation;
    }

    while (node != NULL) {
        double value = node->value;
        sum += pow((value - average) * 1.0, 2);
        node = node->next;
    }

    deviation = (int) (sqrt(sum / count) + 0.5);
    return deviation;
}
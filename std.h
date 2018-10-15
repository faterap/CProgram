#ifndef C_STD_H
#define C_STD_H

typedef struct l_node list_node;

struct l_node {
    double value;
    struct l_node *next;
};

list_node *create_l_node(double value);

list_node *insert_l_node(list_node *list, double value);

int get_count(list_node *node);

int get_average(list_node *node);

int get_deviation(list_node *node);

#endif //C_STD_H

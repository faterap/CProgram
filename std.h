#ifndef C_STD_H
#define C_STD_H

struct l_node {
    double value;
    struct l_node *next;
};

struct l_node *create_l_node(double value);

struct l_node *insert_l_node(struct l_node *list, double value);

int get_count(struct l_node *node);

int get_average(struct l_node *node);

int get_deviation(struct l_node *node);

#endif //C_STD_H

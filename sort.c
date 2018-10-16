int main(int argc, char *argv[]) {
//    test_bst(argc, argv);
//    test_std(argc, argv);
//    test_life(argc, argv);
    list_node *node = create_l_node(2.0);
    insert_l_node(node, 4.5);
    insert_l_node(node, 1.1);
    insert_l_node(node, 10.5);
    insert_l_node(node, -5);
    sort(node);

    while (node != NULL) {
        printf("%f\n", node->value);
        node = node->next;
    }

    return 0;
}

void sort(list_node *head){
    list_node *tail = NULL;
    list_node *flag = NULL;
    while (flag != head)
    {
        tail = flag;
        flag = head;
        list_node *pre = head;
        while (pre->next != tail)
        {
            list_node *cur_node = pre->next;
            if (pre->value > cur_node->value)
            {
                double temp = pre->value;
                pre->value = cur_node->value;
                cur_node->value = temp;
                flag = pre->next;
            }
            pre = pre->next;
        }
    }
}
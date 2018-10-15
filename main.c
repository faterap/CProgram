#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bst.h"
#include "std.h"
#include "life.h"

const int BUFFER_SIZE = 1024;

void test_bst(int, char *[]);

void test_std(int, char *[]);

void test_life(int, char *[]);

char **split(char str[], char delims[]);

// TO PIG: 相对路径要在CMakeLists.txt中写一句话才可以生效:
// set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "~/CLionProjects/c")，引号的路径就是你所在项目下的路径，不然相对路径会提示找不到文件。
int main(int argc, char *argv[]) {
    test_bst(argc, argv);
//    test_std(argc, argv);
//    test_life(argc, argv);
    return 0;
}

char **split(char str[], char delims[]) {
    char **res = NULL;
    char *p = strtok(str, delims);
    int n_spaces = 0;

    while (p) {
        res = realloc(res, sizeof(char *) * ++n_spaces);

        if (res == NULL) {
            exit(-1);
        }

        res[n_spaces - 1] = p;

        p = strtok(NULL, " ");
    }

    res = realloc(res, sizeof(char *) * (n_spaces + 1));
    res[n_spaces] = 0;

    return res;
}

void test_bst(int argc, char *argv[]) {
    struct Node *tree = NULL;

    char *buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
    while (1) {
        // read one line
        fgets(buffer, BUFFER_SIZE, stdin);

        char **line = split(buffer, " ");

        char command = line[0][0];
        int value = 0;

        if (command == 'i') {
            if (line[1] == NULL) {
                // only one parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            } else if (line[2] != NULL) {
                // more than 2 parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            }

            value = atoi(line[1]);

            if (tree == NULL) {
                tree = createNode(value);
            } else {
                insert(tree, value);
            }
        } else if (command == 's') {
            if (line[1] == NULL) {
                // only one parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            } else if (line[2] != NULL) {
                // more than 2 parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            }

            value = atoi(line[1]);

            tree_node *node = search(tree, value);
            if (node != NULL) {
                printf("present\n");
            } else {
                printf("absent\n");
            }
        } else if (command == 'd') {
            if (line[1] == NULL) {
                // only one parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            } else if (line[2] != NULL) {
                // more than 2 parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            }

            value = atoi(line[1]);

            delete(&tree, value);
        } else if (command == 'p') {
            if (line[1] != NULL) {
                // more than one parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            }

            print(tree);
        } else if (command == '#') {
            if (line[1] != NULL) {
                // more than one parameter
                fprintf(stderr, "illegal input\n");
                exit(-1);
            }
            break;
        } else {
            fprintf(stderr, "illegal input\n");
            exit(-1);
        }
    }

    free(tree);
    free(buffer);
}

void test_std(int argc, char *argv[]) {
    char *buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
    struct l_node *list = NULL;
    while (1) {
        // read from console
        fgets(buffer, BUFFER_SIZE, stdin);

        if (strncmp(buffer, "#", 1) == 0) {
            break;
        }

        // get actual number
        double d_value = 0;
        d_value = atof(buffer);

        // add number to list
        if (list == NULL) {
            list = create_l_node(d_value);
        } else {
            insert_l_node(list, d_value);
        }
    }

    int count = get_count(list);

    if (count != 0) {
        int average = get_average(list);
        int deviation = get_deviation(list);
        printf("mean: %d\n", average);
        printf("stddev: %d\n", deviation);
    } else {
        printf("no data\n");
    }

    free(list);
    free(buffer);
}

// TEST OK
void test_life(int argc, char *argv[]) {
    life(atoi(argv[1]), argv[2]);
}
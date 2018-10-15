#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "bst.h"
#include "std.h"
#include "life.h"

#define boolean int
#define true 1
#define false 0

const int BUFFER_SIZE = 1024;

void test_bst(int, char *[]);

void test_std(int, char *[]);

void test_life(int, char *[]);

char **split(char str[], char delims[]);

// TO PIG: 相对路径要在CMakeLists.txt中写一句话才可以生效:
// set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "~/CLionProjects/c")，引号的路径就是你所在项目下的路径，不然相对路径会提示找不到文件。
int main(int argc, char *argv[]) {
//    test_bst(argc, argv);
    test_std(argc, argv);
//    test_life(argc, argv);
    return 0;
}

char **split(char str[], char delims[]) {
    char **res = NULL;
    char *p = strtok(str, delims);
    int n_spaces = 0, i;

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

// NOT TEST YET
void test_bst(int argc, char *argv[]) {
    struct Node *tree = NULL;

    char *buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
    while (1) {
        // read one line
        fgets(buffer, BUFFER_SIZE, stdin);

        char **line = split(buffer, " ");
        char command = line[0][0];

        int value = 0;
        if (line[1] != NULL) {
            value = atoi(line[1]);
        }

        printf("command = %c\n", command);
        if (command == 'i') {
            if (tree == NULL) {
                tree = createNode(value);
            } else {
                insert(tree, value);
            }
        } else if (command == 's') {
            search(tree, value);
        } else if (command == 'd') {
            delete(tree, value);
        } else if (command == 'p') {
            print(tree);
        } else if (command == '#') {
            break;
        } else {
            fprintf(stderr, "illegal input\n");
            exit(-1);
        }
    }

    free(tree);
}

// NOT TEST YET
void test_std(int argc, char *argv[]) {
    boolean r_from_file = false;
    FILE *fp = NULL;
    if (argv[1] != NULL && argv[2] != NULL) {
        char *file_name = argv[2];
        fp = freopen(file_name, "r", stdin);
        r_from_file = true;
    } else {
        r_from_file = false;
    }

    char *buffer = (char *) malloc(BUFFER_SIZE * sizeof(char));
    struct l_node *list = NULL;
    while (1) {
        if (r_from_file) {
            // read from file
            fscanf(fp, "%s", buffer);
        } else {
            // read from console
            fgets(buffer, BUFFER_SIZE, stdin);
        }

        if (strncmp(buffer, "#", 1) == 0) {
            if (r_from_file) {
                // close file pointer
                fclose(fp);
            }

            break;
        }

        // negative or not
        boolean negative = false;
        if (buffer[0] == '-') {
            negative = true;
        }

        // get actual number
        double d_value = 0;
        if (negative) {
            d_value = -atof(buffer);
        } else {
            d_value = atof(buffer);
        }

        // add number to list
        if (list == NULL) {
            list = create_l_node(d_value);
        } else {
            insert_l_node(list, d_value);
        }
    }

    int average = get_average(list);
    int deviation = get_deviation(list);
    printf("mean: %d\n", average);
    printf("stddev: %d\n", deviation);

    free(list);
    free(buffer);
}

// TEST OK
void test_life(int argc, char *argv[]) {
    life(atoi(argv[1]), argv[2]);
}
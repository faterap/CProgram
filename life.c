#include<stdio.h>
#include<stdlib.h>
#include <errno.h>
#include <string.h>

#include "life.h"
#include "bst.h"

void life(int step, char *file_name) {
    if (step <= 0) {
        fprintf(stderr, "n must be a positive integer\n");
        exit(-1);
    }

    FILE *fp = fopen(file_name, "r");
    if (fp == NULL) {
        printf("%s\n", strerror(errno));
    } else {
        int i, j = 0;
        // load width and height
        int width, height = 0;
        fscanf(fp, "%d%d", &height, &width);

        char data[width + 1];
        char board[height][width];

        // load grids in file
        for (i = 0; i < height; i++) {
            fscanf(fp, "%s", data);

            for (j = 0; j < width; j++) {
                board[i][j] = data[j];
            }
        }

        for (int index = 0; index < step; index++) {
            // traverse the board
            transform(height, width, board);
        }

        // print output board
        print_board(height, width, board);
    }
    fclose(fp);
}

void transform(int h, int w, char board[h][w]) {
    char tmp[h][w];
    int i, j = 0;
    // traverse the board
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            int neighbors = neighbor(i, j, h, w, board);
            char ch = board[i][j];

            if (ch == '*') {
                if (neighbors < 2 || neighbors > 3) {
                    tmp[i][j] = '.';
                } else {
                    tmp[i][j] = '*';
                }
            } else if (ch == '.') {
                if (neighbors == 3) {
                    tmp[i][j] = '*';
                } else {
                    tmp[i][j] = '.';
                }
            } else {
                fprintf(stderr, "illegal board\n");
                exit(-1);
            }
        }
    }

    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            board[i][j] = tmp[i][j];
        }
    }
}

void print_board(int h, int w, char board[h][w]) {
    int i, j = 0;
    for (i = 0; i < h; i++) {
        for (j = 0; j < w; j++) {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int neighbor(int i, int j, int h, int w, char board[h][w]) {
    if (i < 0 || j < 0 || i >= h || j >= w) {
        fprintf(stderr, "illegal index\n");
        exit(-1);
    }

    int min_i = i - 1 < 0 ? h - 1 : i - 1;
    int max_i = i + 1 == h ? 0 : i + 1;
    int min_j = j - 1 < 0 ? w - 1 : j - 1;
    int max_j = j + 1 == w ? 0 : j + 1;

//    printf("i = %d, j = %d, mini = %d,maxi = %d, minj = %d, maxj = %d\n", i, j, min_i, max_i, min_j, max_j);

    int count = is_populated(min_i, min_j, h, w, board) + is_populated(min_i, j, h, w, board) +
                is_populated(min_i, max_j, h, w, board)
                + is_populated(i, min_j, h, w, board) + is_populated(i, max_j, h, w, board) +
                is_populated(max_i, min_j, h, w, board)
                + is_populated(max_i, j, h, w, board) + is_populated(max_i, max_j, h, w, board);
    return count;
}

boolean is_populated(int i, int j, int w, int h, char board[h][w]) {
    if (i < 0 || j < 0 || i >= h || j >= w) {
        fprintf(stderr, "illegal index\n");
        exit(-1);
    }

    return board[i][j] == '*';
}


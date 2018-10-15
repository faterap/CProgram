#ifndef C_LIFE_H
#define C_LIFE_H

void life(int step, char *file_name);

void print_board(int h, int w, char [h][w]);

int neighbor(int i, int j, int h, int w, char [h][w]);

int is_populated(int i, int j, int h, int w, char[h][w]);

void transform(int h, int w, char [h][w]);

#endif //C_LIFE_H


#include <iostream>

using namespace std;

int sum_middle_row_column(int **vals, int num_rows, int num_cols) {

    int mc = num_cols / 2;
    int mr = num_rows / 2;
    int sum = 0;

    int array[num_rows][num_cols];

    array = &&vals;

    for (int i = 0; i < num_rows; i++) {

        sum += (array[i][mc]);

    }

    for (int a = 0; a < num_cols; a++) {

        sum += (array[mr][a]);
    }
    
    return sum;
}
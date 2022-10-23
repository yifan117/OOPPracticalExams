#include <iostream>

using namespace std;

int main () {
    // int num_rows = 3;
    // int num_cols = 3;
    // int row1[]={10,15,9};
    // int row2[]={11,5,3};
    // int row3[]={8,56,1};
    // int array[3][3]={{10,15,9},{11,5,3},{8,56,1}};
    // int mc = num_cols / 2;
    // int mr = num_rows / 2;
    // int sum = 0;

    // for (int i = 0; i < num_rows; i++) {

    //     sum += (array[i][mc]);

    // }

    // for (int a = 0; a < num_cols; a++) {

    //     sum += (array[mr][a]);
    // }

    // cout << sum << endl;

    int *p;
    int a = 10;
    int **p1;

    *p1 = p;

    *p = a;

    cout << p;
    return 0;
}
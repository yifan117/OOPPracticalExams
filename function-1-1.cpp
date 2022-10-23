#include <iostream>

using namespace std;

int **pointer_array(int *vals, int len) {

    int **arr = &vals;

    for (int i = 0; i < len; i++) {

        **(arr + i) = &(vals);
    }

    // for (int i = 0; i < len; i++) {

    //     **(arr + i) = *(vals + i);

    // }

    // for (int i = 0; i < len; i++) {

    //     **(arr + i) = *(vals + i);

    // }

    return arr;

}
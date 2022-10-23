#include <iostream>

using namespace std;

void print_matrix(int array[10][10]);

void print_matrix(int array[10][10]){

    bool first = true;

    for (int i = 0; i < 10; i++) {

        for (int k = 0; k < 10; k++) {

            if (first == false) {
                cout << " ";
            }
            cout << array[i][k];

            first = false;
        }

        first = true;
        cout << "\n";

    }
}
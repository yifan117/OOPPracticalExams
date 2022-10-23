#include <iostream>

using namespace std;

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main () {

    int binary[] = {1,0,1,0};

    int number = 4;

    cout << bin_to_int(binary, number);

    return 0;
}
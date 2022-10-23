#include <iostream>

using namespace std;

extern int even_numbers_above(int vals[], int above, int length);

int main () {

    int vals[]={1,2,3,4,5,6,7};
    int length=7;
    int above = 3;

    cout << even_numbers_above(vals, above, length);

    return 0;
}
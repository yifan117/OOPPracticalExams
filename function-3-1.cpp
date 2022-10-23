#include <iostream>

using namespace std;

int even_numbers_above(int vals[], int above, int length) {

    int count = 0;

    for (int i = 0; i < length; i++) {

        if ((vals[i] > above) && (vals[i] % 2 == 0)) {

            count += 1;

        }
    }

    return count;
}
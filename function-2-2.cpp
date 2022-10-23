#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits);

int bin_to_int(int binary_digits[], int number_of_digits) {

    int ans = 0;
    vector<int> a;

    for (int k = 0; k < number_of_digits; k++) {

        a.push_back(binary_digits[k]);

    }

    reverse(a.begin(), a.end());

    for (int i = 0; i < number_of_digits; i++) {

        ans += a[i] * pow(2,i);

    }

    return ans;
}
#include <iostream>

using namespace std;

int palindrome_sum(int integers[], int length);
bool is_array_palindrome(int integers[], int length);
int sum_integers(int integers[], int length);

int sum_integers(int integers[], int length){

    int ans = 0;

    for (int i = 0; i < length; i++) {

        ans += integers[i];

    }

    if (is_array_palindrome(integers, length) == false) {

        ans = -1;

    }

    return ans;

}
bool is_array_palindrome(int integers[], int length){

    int end = length - 1;
    bool ans = true;

    for (int i = 0; i < length; i++) {

        if (integers[i] != integers[end]){

            ans = false;
            break;

        }

        end--;

    }

    return ans;

}
int palindrome_sum(int integers[], int length) {

    return sum_integers(integers, length);
    
}
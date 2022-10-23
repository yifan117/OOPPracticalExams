#include <iostream>

using namespace std;

extern int tax_bracket_lookup(int income);

int main () {

    int income = 110000;

    cout << tax_bracket_lookup(income) << endl;

    return 0;
}
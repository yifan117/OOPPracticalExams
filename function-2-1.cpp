#include <iostream>

using namespace std;

int tax_bracket_lookup(int income) {

    int bracket;

    if (income <= 10000) {

        bracket = 0;

    } else if ((income > 10000) && (income <= 20000)) {

        bracket = 10;

    } else if ((income > 20000) && (income <= 50000)) {

        bracket = 15;
        
    } else if ((income > 50000) && (income <= 100000)) {

        bracket = 20;
        
    } else if (income > 100000) {

        bracket = 30;

    }

    return bracket;
}
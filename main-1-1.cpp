#include "Truck.h"
#include <iostream>

using namespace std;

int main () {

    Truck t1;

    Truck t2 (1, "test1");

    cout << t2.get_brand_code() << endl;
    cout << t2.get_brand_name() << endl;

    return 0;
}
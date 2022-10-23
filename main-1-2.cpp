#include <iostream>
#include "Truck_yard.h"
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    
        Truck_yard t1;
        Truck_yard t2(3);
        Truck t3 (3, "test3");
        Truck t4 (4, "test4");
        Truck t5 (5, "test5");
        Truck t6 (6, "test6");

        cout << t2.get_total_stock_count() << endl;

        t2.add_stock(t3);

        cout << t2.get_current_stock_list() << endl;

        cout << t2.get_total_stock_count() << endl;

        cout << t2.get_stock_count(3) << endl;
        
}
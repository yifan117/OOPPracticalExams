#include "Truck.h"
#include <string>
#include <iostream>
#include <vector>

#pragma once

class Truck_yard {
    public:
    int matches;
    int cap;
    int count;
    vector<Truck> stock;
    Truck_yard();                         // default constructor for yard with zero capacity
    Truck_yard(int capacity);             // constructor for yard that can hold "capacity" trucks
    int get_total_stock_count();          // count of the current number of trucks in yard
    int get_stock_count(int code);        // count of the number of trucks with brand code equal to "code"
    Truck *get_current_stock_list();      // gets an array containing all the trucks in the yard
    bool add_stock(Truck c);              // tries to add truck to yard if there is enough spare capacity to fit it
                                        // then will return true. 
    ~Truck_yard();                        // destructor

};
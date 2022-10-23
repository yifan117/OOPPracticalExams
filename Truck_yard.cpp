#include <iostream>
#include <string>
#include "Truck_yard.h"
#include <vector>
#include <algorithm>

using namespace std;

Truck_yard::Truck_yard () {
    cap = 0;
    count = 0;
    stock = {};
    matches = 0;
}

Truck_yard::Truck_yard (int capacity) {
    cap = capacity;
    count = 0;
    stock = {};
    matches = 0;
}

int Truck_yard::get_total_stock_count () {
    return count;
}

int Truck_yard::get_stock_count (int code) {
    for (int i = 0; i < stock.size(); i++) {
        if (stock[i].get_brand_code() == code) {
            matches++;
        }
    }
    return matches;
}

Truck *Truck_yard::get_current_stock_list () {
    Truck *list = new Truck[stock.size()];
    for (int i = 0; i < stock.size(); i++) {
        list[i] = stock[i];
    }
    return list;
}

bool Truck_yard::add_stock (Truck c) {
    if (count < cap) {
        stock.push_back(c);
        count++;
        return true;
    }
    else {
        return false;
    }
}

Truck_yard::~Truck_yard () {
    stock.clear();
}
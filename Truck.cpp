#include "Truck.h"
#include <iostream>
#include <string>

using namespace std;

Truck::Truck () {
    brand_code = 0;
    brand_name = "";
}

Truck::Truck (int b_code, string b_name) {
    brand_code = b_code;
    brand_name = b_name;
}

string Truck::get_brand_name () {
    return brand_name;
}

int Truck::get_brand_code () {
    return brand_code;
}

Truck::~Truck () {;
}
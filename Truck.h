#pragma once
#include <string>

using namespace std;

class Truck {
        
    public:
    int brand_code;
    string brand_name;
    Truck();                                     // default constructor - makes new truck with brand code number 0 and
                                                // and empty string "" for brand name

    Truck(int b_code, string b_name);       // constructor taking string representing brand name
                                                // and integer representing code for that brand

    string get_brand_name();                // returns the brand name of the truck
    int get_brand_code();                        // returns the brand code number of truck
    ~Truck();                                    // destructor

};
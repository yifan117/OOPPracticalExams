#include <iostream>
#pragma once

using namespace std;

class Employee {
    public:
        Employee(int payRate);    // creates a Employee with payRate

        int payRate; // hourly payRate
        float energyLevel;   // Initially 100%

        void takeABreak(int mins);

        void work(int mins);
        float pay();
};
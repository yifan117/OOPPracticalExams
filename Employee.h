#include <iostream>
#pragma once

using namespace std;

class Employee {
    public:
        Employee(int payRate);    // creates a Employee with payRate

        int payRate; // hourly payRate
        float energyLevel;   // Initially 100%

        int get_payRate();
        float get_energyLevel();

        void set_payRate();
        void set_energyLevel();

        void takeABreak(int mins);

        void work(int mins);
        float pay();
};
#include <iostream>
#pragma once

using namespace std;

class Employee {
    public:
        Employee();
        Employee(int payRate);    // creates a Employee with payRate

        int payRate; // hourly payRate
        float energyLevel;   // Initially 100%

        int get_payRate();
        float get_energyLevel();

        void set_payRate(int payRate);
        void set_energyLevel(float energyLevel);

        void takeABreak(int mins);

        virtual void work(int mins);
        virtual float pay();
};
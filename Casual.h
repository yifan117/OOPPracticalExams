#include <iostream>
#include "Employee.h"
#pragma once

using namespace std;

class Casual : public Employee {
    public:
        Casual();
        Casual(int payRate); // Create a Casual with a payRate

        int hoursWorked[7];
        int dayCount;

        int get_payRate();
        int get_dayCount();

        void set_payRate(int payRate);

        void set_dayCount(int dayCount);

        void work(int mins);
        float pay();
        void endWorkDay();
};
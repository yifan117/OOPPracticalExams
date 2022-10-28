#include <iostream>
#pragma once
#include "Employee.h"

class Manager : public Employee {
    public:
    Manager();            
    Manager(int payRate);                // Create a Manager with a payRate
    
    float hoursWorked;    // hours in day                 
    int daysWorked;   // number of 8 hour days

    int get_payRate();
    float get_energyLevel();
    int get_daysWorked();
    float get_hoursWorked();

    void set_payRate(int payRate);
    void set_energyLevel(float energyLevel);
    void set_daysWorked();
    void set_hoursWorked(float hoursWorked);

    void work(int mins);
    float pay();
};
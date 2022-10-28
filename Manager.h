#include <iostream>
#pragma once
#include "Employee.h"

class Manager {
    Manager();            
    Manager(int payRate);                // Create a Manager with a payRate
    
    float hoursWorked;                     
    int daysWorked;   
}
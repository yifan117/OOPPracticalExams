#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
}

Employee::Employee(int payRate) {
    payRate = payRate;
    energyLevel = 100;
}

void Employee::takeABreak(int mins) {
    energyLevel += mins * 2;
    if (energyLevel > 100) {
        energyLevel = 100;
    }
}

void Employee::work(int mins) {
}

float Employee::pay() {
}

int Employee::get_payRate() {
    return payRate;
}

float Employee::get_energyLevel() {
    return energyLevel;
}

void Employee::set_payRate(int payRate) {
    payRate = payRate;
}

void Employee::set_energyLevel(float energyLevel) {
    energyLevel = energyLevel;
}
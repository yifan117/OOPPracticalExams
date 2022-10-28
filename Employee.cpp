#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(int payRate) {
    this->payRate = payRate;
    this->energyLevel = 100;
}

void Employee::takeABreak(int mins) {
    this->energyLevel += mins * 2;
    if (this->energyLevel > 100) {
        this->energyLevel = 100;
    }
}

void Employee::work(int mins) {
    this->energyLevel -= mins * 2;
    if (this->energyLevel < 0) {
        this->energyLevel = 0;
    }
}

float Employee::pay() {
    return this->payRate * (this->energyLevel / 100);
}

int Employee::get_payRate() {
    return this->payRate;
}

float Employee::get_energyLevel() {
    return this->energyLevel;
}

void Employee::set_payRate(int payRate) {
    this->payRate = payRate;
}

void Employee::set_energyLevel(float energyLevel) {
    this->energyLevel = energyLevel;
}
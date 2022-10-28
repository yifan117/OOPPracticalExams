#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(int payRate) : Employee(payRate) {
    this->payRate = payRate;
    this->energyLevel = 100;
}

void Manager::work(int mins) {
    this->energyLevel -= mins * 0.25;
    if (this->energyLevel < 0) {
        this->energyLevel = 0;
    }
}

void Manager::set_daysWorked() {
    this->daysWorked = daysWorked;
}

void Manager::set_hoursWorked(float hoursWorked) {
    this->hoursWorked = hoursWorked;

    if (this->hoursWorked >= 8) {
        this->daysWorked++;
    }
}

float Manager::pay() {
    return this->payRate * this->energyLevel;
}

int Manager::get_payRate() {
    return this->payRate;
}

float Manager::get_energyLevel() {
    return this->energyLevel;
}

void Manager::set_payRate(int payRate) {
    this->payRate = payRate;
}

void Manager::set_energyLevel(float energyLevel) {
    this->energyLevel = energyLevel;
}







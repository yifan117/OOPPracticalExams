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

float Manager::pay() {
    return this->payRate * (this->energyLevel / 100);
}
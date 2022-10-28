#include <iostream>
#include "Casual.h"
#include <string>

using namespace std;

Casual::Casual() {
    for (int i = 0; i < 7; i++) {
        this->hoursWorked[i] = 0;
    }    
    
    this->dayCount = 0;

    this->energyLevel = 100;
}

Casual::Casual(int payRate) {
    this->dayCount = 0;
    for (int i = 0; i < 7; i++) {
        this->hoursWorked[i] = 0;
    }
    
    this->energyLevel = 100;
}

void Casual::set_payRate(int payRate) {
    this->payRate = payRate;
}

void Casual::endWorkDay() {
    this->dayCount++;
    this->energyLevel = 100;
}

int Casual::get_payRate() {
    return this->payRate;
}

int Casual::get_dayCount() {
    return this->dayCount;
}

void Casual::set_dayCount(int dayCount) {
    this->dayCount = dayCount;
}

void Casual::work(int mins) {
    this->energyLevel -= (mins * 0.5);

    if (this->dayCount < 5) {

    this->hoursWorked[this->dayCount] += mins;
    } else if (this->dayCount >= 5) {
        this->hoursWorked[this->dayCount] += (mins * 2);
    }

    if (this->energyLevel < 0) {
        this->energyLevel = 0;
    }

}

float Casual::pay() {
    float total = 0;

    for (int i = 0; i < 7; i++) {

        total += (this->hoursWorked[i]);
    }

    this->dayCount = 0;

    for (int i = 0; i < 7; i++) {
        this->hoursWorked[i] = 0;
    }

    float overallPay = total * this->payRate;

    return (overallPay);
}
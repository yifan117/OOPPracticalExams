#include <iostream>
#include "Casual.h"
#include <string>

using namespace std;

Casual::Casual() {
    for (int i = 0; i < 7; i++) {
        hoursWorked[i] = 0;
    }    
    
    dayCount = 0;

    energyLevel = 100;
}

Casual::Casual(int payRate) {
    dayCount = 0;
    for (int i = 0; i < 7; i++) {
        hoursWorked[i] = 0;
    }
    
    energyLevel = 100;
}

void Casual::set_payRate(int payRate) {
    payRate = payRate;
}

void Casual::endWorkDay() {
    dayCount++;
    hoursWorked[dayCount] = 0;
    energyLevel = 100;
}

int Casual::get_payRate() {
    return payRate;
}

int Casual::get_dayCount() {
    return dayCount;
}

void Casual::set_dayCount(int dayCount) {
    dayCount = dayCount;
}

void Casual::work(int mins) {
    energyLevel -= (mins * 0.5);

    hoursWorked[dayCount] += mins;

    if (energyLevel < 0) {
        energyLevel = 0;
    }

}

float Casual::pay() {
    float total = 0;

    for (int i = 0; i < 7; i++) {

        if (i < 5) {
        total += hoursWorked[i];
        } else if (i >= 5) {
            total += (hoursWorked[i] * 2);
        }
    }

    dayCount = 0;

    for (int i = 0; i < 7; i++) {
        hoursWorked[i] = 0;
    }

    return (payRate * total);
}
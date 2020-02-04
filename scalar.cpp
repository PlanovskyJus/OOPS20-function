/*
    scalar.cpp

    Implement scalar example demonstration
*/

#include "scalar.hpp"

// average of two numbers
double average(int n1, int n2) {
    
    return (n1 + n2) / 2;
}

// pay based on hours and rate
double pay(double hours, double rate) {

    // hours cannot be negative
    if (hours < 0)
        return -1;
    
    // rate cannot be negative
    if (rate < 0)
        return -1;

    return hours * rate;
}

// pay based on hours and rate
double pay2(double hours, double rate) {

    if (hours >= 0 && rate >= 0)
        return hours * rate;
    else 
        return -1;
}

// pay based on hours and rate
double pay3(double hours, double rate) {

    double result;
    if (hours >= 0 && rate >= 0)
        result = hours * rate;
    else 
        result = -1;
    
    return result;
}
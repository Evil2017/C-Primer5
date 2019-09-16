//
//  ex7_57.h
//  Exercise 7.57
//
//  Created by pezy on 11/25/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#ifndef CP5_ex7_57_h
#define CP5_ex7_57_h
#include <iostream>
using namespace std;
#include <string>
// string bal;

typedef double Money;
int height; // defines a name subsequently used inside Screen
class Account {
public:
    Money balance(Money a)
    {
        Money b = a;
        return bal;
    }
    typedef std::string::size_type pos;
    void dummy_fcn(pos height)
    {
        cursor = width * height; // which height? the parameter
    }
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double newRate) { interestRate = newRate; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    // typedef int Money;
    typedef double Money;
    Money bal;
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 42.42;
    static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif

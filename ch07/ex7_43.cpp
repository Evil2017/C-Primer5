//
//  ex7_43.cpp
//  Exercise 7.43
//
//  Created by pezy on 11/20/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;
class NoDefault {
public:
    NoDefault(int i) {}
};

class C {
public:
    C() : def(0) {} // define the constructor of C.
private:
    NoDefault def;
};
static string str;
static int i;
int main()
{
    cout << "the static string is :" << str << endl;
    cout << "the static int is :" << i << endl;
    C c;

    std::vector<C> vec(10);
    return 0;
}

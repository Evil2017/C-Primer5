//
//  ex7_27_TEST.cpp
//  Test of Exercise 7.27
//
//  Created by pezy on 11/14/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#include "ex7_27.h"
using namespace std;
// int a;
// int b;
// int getInt();
int main()
{
    // int c;
    // int d;
    // cout << "out side the main a & b :" << a << "\t" << b << endl;
    // cout << "in side the main c & d :" << c << "\t" << d << endl;
    // cout << "in other function e add f :" << getInt() << endl;
    // return 0;
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(std::cout);
    std::cout << "\n";
    myScreen.display(std::cout);
    std::cout << "\n";

    return 0;
}
int getInt()
{
    int e, f, g, h, i;
    cout << "in side the function getInt e & f :" << e << "\t" << f << "\t" << g << "\t" << h
         << endl;
    return e + f;
}

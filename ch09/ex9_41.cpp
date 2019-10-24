//
//  ex9_41.cpp
//  Exercise 9.41
//
//  Created by pezy on 12/4/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @Brief  Write a program that initializes a string from a vector<char>.

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<char> vec{'p', 'e', 'z', 'y'};

    string str(vec.begin(), vec.end());

    cout << str << endl;
    const char* cp = "stately, plump buck";
    str.assign(cp, 7);
    str.insert(str.size(), cp + 7);
    cout << str << endl;
    string s1 = "some string";
    string s2 = "some other string";
    s1.insert(0, s2);
    cout << s1 << endl;
    s1.insert(0, s2, 0, s2.size());
    cout << s1 << endl;
    system("pause");
    return 0;
}

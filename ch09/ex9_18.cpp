//
//  ex9_18.cpp
//  Exercise 9.18
//
//  Created by pezy on 12/3/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @Brief  Write a program to read a sequence of strings from the standard
//  input into
//          a deque. Use iterators to write a loop to print the elements in the
//          deque.

#include <deque>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::string;

int main()
{
    deque<string> input;
    for (string str; cin >> str; input.push_back(str))
        ;
    cout << "show the content:" << endl;

    for (auto iter = input.cbegin(); iter != input.cend(); ++iter) cout << *iter << endl;
    input.insert(input.end(), 10, "123");
    input.insert(input.begin(), 10, "321");
    input.push_front("000");
    input.push_back("zzz");
    for (auto iter = input.cbegin(); iter != input.cend(); ++iter) cout << *iter << endl;
    system("pause");
    return 0;
}

//
//  ex9_20.cpp
//  Exercise 9.20
//
//  Created by pezy on 12/3/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @Brief  Write a program to copy elements from a list<int> into two deques.
//          The even-valued elements should go into one deque and the odd ones
//          into the other.

#include <deque>
#include <iostream>
#include <list>
using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::list;

int main()
{
    list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << l.front() << "    " << l.back() << endl;
    l.back() = 100;
    deque<int> odd, even;
    for (auto i : l) (i & 0x2 ? odd : even).push_back(i);

    for (auto i : odd) cout << i << " ";
    cout << endl;
    for (auto i : even) cout << i << " ";
    cout << endl;
    system("pause");
    return 0;
}

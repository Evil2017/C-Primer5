//
//  ex9_32.cpp
//  Exercise 9.32
//
//  Created by pezy on 12/3/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @Brief  Assuming vi is a container of ints that includes even and odd
//  values,
//          predict the behavior of the following loop.
//          After you've analyzed this loop, write a program to test whether
//          your expectations were correct.
//
//			iter = vi.begin();
//			while (iter != vi.end())
//				if (*iter % 2)
//					iter = vi.insert(iter, *iter);
//				++iter;
//
//  @Answer "infinite loop". Casue the `++iter` out of the `while` loop. But
//  even through add brackets it is still infinite loop.
//          Fixed following.

#include <iostream>
using std::cout;
using std::endl;
#include <list>
#include <vector>
using std::vector;

int main()
{
    std::list<int> li;
    auto i = li.begin();
    int j = 0;
    while (j < 20) {
        i = li.insert(i, j++);
    }
    for (auto i : li) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            iter += 2;
        }
        else {
            ++iter;
        }
    }

    for (auto i : vi) cout << i << " ";
    cout << endl;
    cout << vi.size() << " " << vi.capacity() << endl;
    vi.shrink_to_fit();
    cout << vi.size() << " " << vi.capacity() << endl;
    vi.reserve(20);
    auto it = vi.begin();
    j = 0;
    while (j < 6) {
        it = vi.insert(it, j++);
    }
    cout << vi.size() << " " << vi.capacity() << endl;
    system("pause");
    return 0;
}

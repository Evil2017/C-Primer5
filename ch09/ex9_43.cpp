//
//  ex9_43.cpp
//  Exercise 9.43
//
//  Created by pezy on 6/18/15.
//  Updated by sanerror on 10/16/16.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @Brief  Write a function that takes three strings, s, oldVal, and newVal.
//          Using iterators, and the insert and erase functions replace
//          all instances of oldVal that appear in s by newVal.
//          Test your function by using it to replace common abbreviations,
//          such as "tho" by "though" and "thru" by "through".

#include <string>
using std::string;

#include <iostream>

void Replace(string& s, const string& oldVal, const string& newVal)
{
    for (auto beg = s.begin();
         std::distance(beg, s.end()) >= std::distance(oldVal.begin(), oldVal.end());) {
        if (string{beg, beg + oldVal.size()} == oldVal) {
            // beg = s.erase(beg, beg + oldVal.size());
            // beg = s.insert(beg, newVal.cbegin(), newVal.cend());
            s = s.replace(beg, beg + oldVal.size(), newVal.cbegin(), newVal.cend());
            if (oldVal.size() < newVal.size()) {
                beg += newVal.size() - 1;
            }
            else {
                beg += oldVal.size() - 1;
            }
            // std::advance(beg, newVal.size());
        }
        else
            ++beg;
    }
}

int main()
{
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thruthru is a foolish, thotho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "thruthru");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"my world is a big world"};
        Replace(str, "world", "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        std::cout << str << std::endl;
    }
    system("pause");
    return 0;
}

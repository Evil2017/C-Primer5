//
//  ex7_23.h
//  Exercise 7.23
//
//  Created by pezy on 11/14/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h

#include <string>

class Screen {
public:
public:
    void some_member() const;

    // using pos = std::string::size_type;
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r * width + c]; }

private:
    // other members as before
    mutable size_t access_ctr; // may change even in a const object
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif

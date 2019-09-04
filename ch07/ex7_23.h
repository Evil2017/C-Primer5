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
    friend int ch(const Screen& s);

public:
    typedef std::string::size_type pos;
    Screen& set(char);
    Screen& set(pos, pos, char);

    void some_member() const;

    // using pos = std::string::size_type;
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
inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}
//返回的是调用set对象的引用 ，返回引用的函数是左值，则函数返回的是对象本身而非对象的副本
inline Screen& Screen::set(pos r, pos col, char c)
{
    contents[r * width + col] = c;
    return *this;
}
void Screen::some_member() const
{
    ++access_ctr;
}
int ch(const Screen& s)
{
    ++s.access_ctr;
    return s.access_ctr;
}
#endif

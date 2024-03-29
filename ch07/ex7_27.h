//
//  ex7_27.h
//  Exercise 7.27
//
//  Created by pezy on 11/14/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//

#ifndef CP5_ex7_27_h
#define CP5_ex7_27_h

#include <iostream>
#include <string>
using namespace std;
class Screen {
public:
    Screen lookup(string* a);
    // Screen lookup(std::string const*);
    // Screen lookup(const string *);
    Screen lookup(const string* a);
    Screen lookupref(string& b); // 字符串引用
    // Screen lookupref(string const& b); //字符串类型的常量引用
    Screen lookupref(const string& b); //字符串类型的常量引用
    using pos = std::string::size_type;

    Screen() = default;                                                             // 1
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}       // 2
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {} // 3

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r * width + c]; }
    inline Screen& move(pos r, pos c);
    inline Screen& set(char c);
    inline Screen& set(pos r, pos c, char ch);

    const Screen& display(std::ostream& os) const
    {
        do_display(os);
        return *this;
    }
    Screen& display(std::ostream& os)
    {
        do_display(os);
        return *this;
    }

private:
    void do_display(std::ostream& os) const { os << contents; }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

//移动,返回的是对象本身，而非对象副本
inline Screen& Screen::move(pos r, pos c)
{
    cursor = r * width + c;
    return *this;
}

inline Screen& Screen::set(char c)
{
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch)
{
    contents[r * width + c] = ch;
    return *this;
}

#endif

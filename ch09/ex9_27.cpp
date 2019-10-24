//! @file   Exercise 9.27
//! @author pezy
//! @date   2014-12-03
//! @Brief  Write a program to find and remove the odd-valued elements in a
//! forward_list<int>.

#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::forward_list;

int main()
{
    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto prev = flst.before_begin(), curr = flst.begin(); curr != flst.end();)
        if (*curr & 0x1)
            curr = flst.erase_after(prev);
        else
            prev = curr++;

    for (auto i : flst) cout << i << " ";
    system("pause");
    cout << endl;
}

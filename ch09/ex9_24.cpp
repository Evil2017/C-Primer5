//! @Yue Wang @pezy
//!
//! Exercise 9.24:
//! Write a program that fetches the first element in a vector using at,
//! the subscript operator, front, and begin. Test your program on an empty
//! vector.
//!
#include <iostream>
#include <list>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> li = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << v.at(0) << std::endl;
    // terminating with uncaught exception of type std::out_of_range
    std::cout << v[0] << std::endl;       // Segmentation fault: 11
    std::cout << v.front() << std::endl;  // Segmentation fault: 11
    std::cout << *v.begin() << std::endl; // Segmentation fault: 11
    // system("pause");
    auto it = v.begin();
    while (it != v.end()) {
        if (*it % 2) {
            it = v.erase(it);
        }
        else {
            ++it;
        }
    }
    auto il = li.begin();
    while (il != li.end()) {
        if (*il % 2) {
            ++il;
        }
        else {
            il = li.erase(il);
        }
    }
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
        // v.erase(it);
    }
    cout << endl;
    il = li.begin();
    while (il != li.end()) {
        std::cout << *il << " ";
        ++il;
    }
    cout << endl;
    system("pause");
    return 0;
}

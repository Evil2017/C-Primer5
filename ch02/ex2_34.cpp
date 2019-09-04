#include <iostream>

int main()
{
    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)

    const int ci = i, &cr = ci;
    auto b = ci;  // b is an int (top-level const in ci is dropped)
    auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;  // d is an int* (& ofan int objectis int*)
    auto e = &ci; // e is const int*(& of a const object is low-level const)

    const auto f = ci; // deduced type of ci is int; f has type const int
    auto& g = ci;      // g is a const int& that is bound to ci
    char ca = 'a';
    char& rca = ca;
    // std::cout << "ca= " << ca << std::endl;
    a = 42;
    b = 42;
    c = 42;
    *d = 42;
    e = &c;
    const double pi = 3.14;
    const double pi2 = 3.14 * 2;
    double dval = 3.14 * 3;
    const double* ptr = &pi;
    std::cout << "ptr = " << *ptr << std::endl;
    ptr = &pi2;
    std::cout << "ptr = " << *ptr << std::endl;
    ptr = &dval;
    std::cout << "ptr = " << *ptr << std::endl;
    ptr--;
    std::cout << "ptr = " << *ptr << std::endl;
    ptr++;
    std::cout << "ptr = " << *ptr << std::endl;
    ptr++;
    std::cout << "ptr = " << *ptr << std::endl;
    ptr++;
    std::cout << "ptr = " << *ptr << std::endl;
    double const* ptr1 = &pi;
    double* const ptr2 = &dval;
    // std::cout << "ptr1 = " << *ptr1 << std::endl;
    // ptr1++;
    // std::cout << "ptr1 = " << *ptr1 << std::endl;
    // std::cout << "ptr2 = " << *ptr2 << std::endl;
    (*ptr2)++;
    // std::cout << "ptr2 = " << *ptr2 << std::endl;
    return 0;
}

#include "ex7_06_sales_data.h"
int dosamething();
int fact(int val)
{
    int ret = 1;
    while (val > 1) {
        ret *= val--;
    }
    return ret;
}
int e;
int main()
{
    int a;
    int b;
    int c;
    int d = dosamething();
    std::cout << "a=" << a << std::endl;
    std::cout << "b=" << b << std::endl;
    std::cout << "c=" << c << std::endl;
    std::cout << "d=" << d << std::endl;
    std::cout << "e=" << e << std::endl;
    system("pause");
    return 0;
    Sales_data total;
    if (read(std::cin, total)) {
        Sales_data trans;
        while (read(std::cin, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        print(std::cout, total) << std::endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}

int dosamething()
{
    int d;
    int f;
    int g;
    return d + f + g;
}

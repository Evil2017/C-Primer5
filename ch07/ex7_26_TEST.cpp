
#include "ex7_26_sales_data.cpp"
int main()
{
    Sales_data sd1, sd2, sd3;
    read(std::cin, sd1);
    read(std::cin, sd2);
    sd3 = add(sd1, sd2);
    print(std::cout, sd1);
    std::cout << std::endl;
    print(std::cout, sd2);
    std::cout << std::endl;
    print(std::cout, sd3);
    std::cout << std::endl;

    return 0;
}

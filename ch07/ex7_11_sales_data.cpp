#include "ex7_11_sales_data.h"

int main()
{
    Sales_data item1; // default constructor
    print(std::cout, item1) << std::endl;

    Sales_data item2("0-201-78345-X"); // Sales_data(const std::string &s):bookNo(s ){}
    print(std::cout, item2) << std::endl;

    Sales_data item3("0-201-78345-X", 3, 20.00);
    print(std::cout, item3) << std::endl;

    Sales_data item4(std::cin);
    print(std::cout, item4) << std::endl;
}

#include "ex7_02_sales_data.h"
#include <iostream>
using namespace std;
const std::string& shorterString(const string& s1, const string& s2)
{
    cout << "&s1:" << &s1 << "\t&s2:" << &s2 << endl;
    cout << "s1:" << s1 << "\ts2:" << s2 << endl;
    return s1.size() <= s2.size() ? s1 : s2;
}
int main()
{
    string a = "1234324";
    string b = "abdcde";
    string c = "";
    cout << "&a=" << &a << "\t&b=" << &b << "\t&c=" << &c << endl;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << endl;
    c = shorterString(a, b);
    cout << "&a=" << &a << "\t&b=" << &b << "\t&c=" << &c << endl;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << endl;
    return 0;

    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }

    return 0;
}

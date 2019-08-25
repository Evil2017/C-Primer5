#include "ex7_02_sales_data.h"
#include <iostream>
using namespace std;
const std::string& shorterString(const string& s1, const string& s2)
{
    cout << "&s1:" << &s1 << "\t&s2:" << &s2 << endl;
    cout << "s1:" << s1 << "\ts2:" << s2 << endl;
    static string s3 = "局部变量";
    cout << "&s3=" << &s3 << endl;
    // return s3;
    return s1.size() <= s2.size() ? s1 : s2;
}
int main()
{
    Sales_data sd1;
    Sales_data sd2;
    cout << "输入sd1的bookNo\tunits_sold\trevenue" << endl;
    cin >> sd1.bookNo >> sd1.units_sold >> sd1.revenue;
    cout << "输入sd2的bookNo\tunits_sold\trevenue" << endl;
    cin >> sd2.bookNo >> sd2.units_sold >> sd2.revenue;
    cout << "将sd1加到sd2上" << endl;
    sd2 = sd2.combine(sd1);
    cout << sd2.bookNo << " " << sd2.units_sold << " " << sd2.revenue << endl;
    cout << &sd2 << endl;
    string a = "1234567地械890";
    string b = "abc";
    string& c = a;
    cout << "&a=" << &a << "\t&b=" << &b << "\t&c=" << &c << endl;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << endl;
    auto& d = shorterString(a, b);

    cout << "&a=" << &a << "\t&b=" << &b << "\t&c=" << &c << "\t&d=" << &d << endl;
    cout << "a=" << a << "\tb=" << b << "\tc=" << c << "\t&d=" << d << endl;

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

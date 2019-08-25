#ifndef CP5_ex7_02_h
#define CP5_ex7_02_h
#include <string>
using namespace std;
// Add the combine and isbn members to the Sales_data
struct Sales_data {
    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);
    double avg_private() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data add(const Sales_data&, const Sales_data&);
ostream& print(ostream&, const Sales_data&);
istream& read(istream&, Sales_data&);
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
double Sales_data::avg_private() const
{
    if (units_sold) {
        return revenue / units_sold;
    }
    else
        return 0;
}
#endif

#ifndef CP5_ex7_11_h
#define CP5_ex7_11_h

#include <iostream>
#include <string>

// Add constructors to your Sales_data class
struct Sales_data {
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {}
    Sales_data(const std::string& s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(n * p)
    {
    }
    Sales_data(std::istream& is); // only

    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// nonmember functions no declaration inside Classs body
std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& write(std::ostream& os, const Sales_data& item)
{
    os << "isbn:" << item.isbn() << "units_sold: " << item.units_sold << "revenue:" << item.revenue;
    os << "form write" << std::endl;
    return os;
}
std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

// member functions.
Sales_data::Sales_data(std::istream& is)
{
    read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

#endif

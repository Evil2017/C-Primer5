#ifndef CP5_ex7_21_h
#define CP5_ex7_21_h

#include <iostream>
#include <string>

// Update Sales_data class to hide its implementation
class Sales_data {
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

public: //接口
    Sales_data() = default;
    Sales_data(const std::string& s) : bookNo(s) {}
    Sales_data(const std::string& s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(n * p)
    {
    }
    Sales_data(std::istream& is) { read(is, *this); }

    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

private: //封装
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// member functions.
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// friend functions
std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
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

#endif

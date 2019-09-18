//
//  ex8_04.cpp
//  Exercise 8.4
//
//  Created by pezy on 11/9/14.
//  Copyright (c) 2014 pezy. All rights reserved.
//
//  @Brief  Write a function to open a file for input and read its contents into
//  a vector of strings,
//          storing each line as a separate element in the vector.
#include "../ch07/ex7_26_sales_data.cpp"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;
using std::vector;

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
    ifstream ifs(fileName);
    if (ifs) {
        string buf;
        while (std::getline(ifs, buf)) vec.push_back(buf);
    }
}

void ReadAndWrite(const string& ifile, const string& ofile)
{
    ifstream input(ifile);
    ofstream output(ofile);
    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }
            else {
                print(output, total) << endl;
                total = trans;
            }
        }
    }
}
int main()
{
    ReadAndWrite("../data/book.txt", "../data/output.txt");
    vector<string> vec;
    ReadFileToVec("../data/book.txt", vec);
    for (const auto& str : vec) cout << str << endl;
    return 0;
}

//! @file   Exercise 9.49
//! @author pezy
//! @date   2014-12-05
//! @Brief  A letter has an ascender if, as with d or f, part of the letter
//! extends above the middle of the line.
//          A letter has a descender if, as with p or g, part of the letter
//          extends below the line.
//          Write a program that reads a file containing words and reports the
//          longest word that contains
//          neither ascenders nor descenders.

#include <fstream>
#include <iostream>
#include <string>

using std::cerr;
using std ::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;
int main()
{
    ifstream ifs1("../data/book.txt");
    if (!ifs1) {
        cerr << "No data?" << endl;
        return -1;
    }
    ifstream ifs("../data/letter.txt");
    if (!ifs) {
        return -1;
    }
    string longest_word;
    for (string word; ifs >> word;)
        if (word.find_first_not_of("aceimnorsuvwxz") == string::npos &&
            word.size() > longest_word.size())
            longest_word = word;

    cout << longest_word << endl;
    system("pause");
    return 0;
}

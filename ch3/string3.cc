// string3.cc -- string excercise
#include <iostream>
#include <string>
using std::string; using std::cout; using std::endl;

int main()
{
    string s("Hello world!");
    /*for (auto &c : s)
        c = 'x';
    */
    // a different method by using while
    string::size_type n = 0;
    while (n != s.size()) {
        s[n] = 'x';
        ++n;
    }

    cout << s << endl;
    return 0;
}
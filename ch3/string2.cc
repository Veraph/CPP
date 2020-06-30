// string2.cc -- operate the string
#include <iostream>
#include <string>
#include <cctype>

using std::string; using std::cout; using std::endl;

int main()
{
    string s("Hello world!!!");

    // use decltype to declare the punct_cnt as it has the same class with
    // s.size()
    decltype(s.size()) punct_cnt = 0; // initialize

    for (auto c : s)
        if (ispunct(c))
            ++punct_cnt;
    cout << punct_cnt
         << " punctuations in " << s << endl;
    
    // use the references to change char in the string
    for (auto &r : s) 
        r = toupper(r);
    cout << s << endl;


    return 0;
}
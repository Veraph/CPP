// condition2.cc -- try some thing
#include <iostream>
#include <string>
using std::string;

int main()
{
    string s = "word";
    // this is wrong, because '+' > '?:'
    //  string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
    string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
    return 0;
}
// cstyle.cc -- differences between c++ and c
#include <iostream>
#include <string>
#include <cstring>

using std::string; using std::cout; using std::endl; 

int main()
{
    string a1 = "A string";
    string a2 = "A different string";

    if (a1 < a2)
        cout << "a1 is less than a2" << endl;
    else
        cout << "a1 is bigger than a1" << endl;

    const char c1[] = "A string";
    const char c2[] = "A different string";

    if(strcmp(c1, c2) < 0)
        cout << "c2 is bigger" << endl;
    else
        cout << "c1 is bigger" << endl;

    return 0;
}
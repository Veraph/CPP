// break.cc -- use of break and continue
#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl; using std::string;

int main()
{
    string s1; string s2;
    while (cin >> s1 && !s1.empty()) {
        if (!isupper(s1[0]))
            continue;

        if (s1 == s2) 
            break;
        else
            s2 = s1;
    }

    if (s1 == s2)
        cout << s1 << " repeated" << endl;
    else
        cout << "no repeat" << endl;
    return 0;

}
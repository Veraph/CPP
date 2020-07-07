// dowhile.cc -- the property of dowhile
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::cout; using std::string;
using std::endl;

int main()
{
    string s;
    do {
        cout << "please enter two string: " << endl;
        string s1; string s2;
        cin >> s1 >> s2;
        cout << (s1 <= s2 ? s1 : s2) << " is the shorter string." << '\n'
             << "More?" << endl;
        cin >> s;
    } while (!s.empty() && s[0] == 'y');
    return 0;
}
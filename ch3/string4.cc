// string4.cc -- another excercise
#include <iostream>
#include <string>
#include <cctype>
using std::string; using std::cin; using std::cout; using std::endl;

int main()
{
    string s;
    cout << "Enter a string contain punctuations: " << endl;

    while (getline(cin, s)){
        for (auto c : s) {
            if (!ispunct(c))
                cout << c;
        }
        cout << endl;
    }
    return 0;
}
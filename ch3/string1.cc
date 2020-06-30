// string1.cc -- do some excercise on string
#include <iostream>
#include <string>

using std::cin; using std::string; using std::cout; using std::endl;

int main()
{
    string word;
    while (cin >> word)
        cout << word << " ";

    //string comparision
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() >= s2.size()) {
        cout << s1 << endl;
        return 0;
    }

    cout << s2 << endl;
    return 0;
}
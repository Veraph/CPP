// string.cc -- intro of string
#include <iostream>
#include <string>
// this usage is better than using namespace std;
using std::string; using std::cin; using std::cout; using std::endl;

int main()
{
    // read the first string
    string s;
    cin >> s;
    cout << s << endl;

    // continue reading until the end of the file
    /*string word;
    while (cin >> word)
        cout << word << endl;
    */
    
    // use getline to read string one line at a time until the end of file
    // could use line.size(), line.empty to control
    string line;
    while (getline(cin, line))
        cout << line << endl;

    return 0;
}
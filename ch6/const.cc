// const.cc -- two functions, 1 for judge whether have upper case, 1 for change all to lowercase
#include <iostream>
#include <string>
using std::cout; using std::endl; using std::string; using std::boolalpha;

bool uppercheck(const string &str)
{
    for (auto c : str)
        if (isupper(c))
            return true;
    return false;
}

const string & casechange(string &str)
{
    for (auto &c : str)
        c = tolower(c);
    return str;
}

int main()
{
    string str("Hello, WOrld!");
    cout << boolalpha << uppercheck(str) << endl;
    cout << casechange(str) << endl;
    return 0;
}
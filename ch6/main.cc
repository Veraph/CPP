// main.cc -- accept two parameters and out put a string
#include <iostream>
//#include <string>, no need to include string?
using std::cin; using std::cout; using std::endl; using std::string;

int main(int argc, char **argv)
{
    string str;
    for (int i = 1; i != argc; ++i) {
        str += argv[i];
        str += " ";
    }
    cout << str << endl;
    return 0;
}
// iterator1.cc -- intro of iterator
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using std::vector; using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    vector<string> text(10, "hi");
    for (auto it = text.begin(); it != text.end(); ++it) {
        for (auto &c : *it)
            c = toupper(c);
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
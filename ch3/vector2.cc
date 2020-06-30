// vector2.cc -- change the elements in the vector
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::cin; using std::cout; using std::endl;
using std::string; using std::vector;

int main()
{
    // initialize the vector
    vector<string> text;
    string word;
    // push_back the words and change to upper
    while (getline(cin, word)) {
        text.push_back(word);
        for (auto &w : text) {
            for (auto &c : w)
                c = toupper(c);
            cout << w << endl;
        }              
    }
    return 0;
}
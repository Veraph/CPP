// vector1.cc -- basic operation using push_back
#include <iostream>
#include <string>
#include <vector>
using std::vector; using std::cin; using std::cout; using std::endl;
using std::string;

int main()
{
    // read int and save in a vector
    /*int num;
    vector<int> nums;
    while (cin >> num)
        nums.push_back(num);
    // output
    for (vector<int>::size_type n = 0; n != nums.size(); ++n)
        cout << nums[n] << " ";
    */
    // read string and save in a vector
    string word;
    vector<string> text;
    while (cin >> word)
        text.push_back(word); 
    // output
    for (vector<string>::size_type m = 0; m != text.size(); ++m)
        cout << text[m] << " ";


    return 0;
}
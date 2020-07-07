// comma.cc -- test the comma function
#include <iostream>
using std::cout; using std::endl;

int main()
{
    int sum = 0;
    int val = 0;
    while (val <= 10) {
        sum += val, ++val;
    }

    cout << sum << endl;
    cout << val << endl;

    return 0;
}
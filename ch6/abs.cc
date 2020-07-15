// abs.cc -- return the absolute value
#include <iostream>
using std::cin; using std::cout; using std::endl;

int abs(int val)
{
    if (val >= 0)
        return val;
    else
        return val * -1;
}

int main()
{
    cout << "please input a num: " << endl;
    int num;
    cin >> num;
    cout << "The absolute value of the num is: " << abs(num) << endl;
    return 0;
}
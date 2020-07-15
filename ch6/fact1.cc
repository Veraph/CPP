// fact1.cc -- fact function and calling fact in main function.
#include <iostream>
using std::cin; using std::cout; using std::endl;

int fact(int val);

int main()
{
    int num;
    cout << "please input a number: " << endl;
    cin >> num;
    cout << "The result is: " << fact(num) << endl;
    return 0;
}

int fact(int val)
{
    if (val == 0 || val == 1)
        return 1;
    else
        return val * fact(val - 1);
}
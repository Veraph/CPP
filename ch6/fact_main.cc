// the main function of fact
#include <iostream>
#include "chapter6.h"
using std::cin; using std::cout; using std::endl;

int main()
{
    cout << "please enter a int: "<< endl;
    int n;
    cin >> n;
    cout << "the result is: " << fact(n) << endl;
    return 0;
}
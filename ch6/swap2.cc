// swap2.cc -- change the value of two value by using reference, this edition is better than the swap
#include <iostream>
using std::cin; using std::cout; using std::endl;

// a swap function
// simple int a and int b will not work as they are local variable
void swap(int &a, int &b)
{
    auto temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << "please input two int: " << endl;
    int a, b;
    cin >> a >> b;
    cout << "The swapped value is: " << endl;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}   
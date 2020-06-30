// const.cc -- test the property of const
#include <iostream>
int main()
{
    using namespace std;

    const int a = 100; 
    cout << a << endl;
    const int &ra = a;
    const int *pa = &a;
    // the address of reference is equal to the address of the int
    // because reference is just another name of the int
    cout << pa << endl;
    cout << &ra << endl;
    cout << &a << endl;
    // const int a = 20; redeclaration is wrong
    
    // const reference can actually change if they point to a normal int
    int i = 42;
    const int &ri = i;
    cout << ri << endl;
    i = 43;
    cout << ri << endl;

    return 0;
}
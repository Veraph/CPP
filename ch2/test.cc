// test.cc -- test the diff between *p1 = val and *p2 = &val
#include <iostream>

int main()
{
    using namespace std;
    int val = 39;
    // int *p1 = val, this is wrong
    int *p1 = &val;
    int *p2 = p1;
    
    cout << p1 << endl;
    cout << p2 << endl;
    // use the * to show the value
    cout << *p1 << endl;
    cout << *p2 << endl;
    
    return 0;
}
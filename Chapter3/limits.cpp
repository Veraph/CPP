// limits.cpp -- some integer limits
#include<iostream>
#include<climits>

int main()
{
    using namespace std;

    int n_int = INT_MAX; // initialize n_int to max int value
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof operator yields size of type or variable
    cout << "int is " << sizeof(int) << "byte." << endl;
    cout << "int is " << sizeof n_int << "byte." << endl; 
    cout << "short is " << sizeof n_short << "byte." << endl;
    cout << "long is " << sizeof n_long << "byte." << endl;
    cout << "llong is " << sizeof n_llong << "byte." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "llong: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}
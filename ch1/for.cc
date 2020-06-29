// for.cc -- example of for loop
#include <iostream>

int main()
{
    using namespace std;

    int sum = 0;
    // no need to use {} in for loop but while must have one
    for (int val = 0; val <= 10; ++val)
        sum += val;

    cout << "Sum of 1 to 10 inclusive is "
         << sum << endl;

    return 0;
}
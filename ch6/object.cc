// object.cc -- example of local variable, local static object and parameters
#include <iostream>
using std::cout; using std::endl;

size_t count_calls(int j = 0)
{
    static size_t ctr = 0; // only initialize in the first call
    ++j;
    return ctr++;
}

int main()
{
    for (size_t i = 0; i != 10; ++i)
        cout << count_calls() << endl;
    return 0;
}
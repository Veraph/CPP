// reset.cc -- function to reset value
#include <iostream>
using std::cout; using std::endl;

void reset(int &i)
{
    i = 0;
}

int main()
{
    int j = 12;
    cout << j << endl;
    reset(j);
    cout << j << endl;

    return 0;
}
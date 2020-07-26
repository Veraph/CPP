// arraryp.cc -- arrary parameter excercise
#include <iostream>
using std::cout; using std::endl;

const int& cmp(int i, const int * const j)
{
    if (i > *j)
        return i;
    else
        return *j;
}

int main()
{
    int m = 5, n = 6;
    int *k = &n;

    cout << cmp(m, k) << endl;
    return 0;
}
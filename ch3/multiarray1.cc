// multiarray1.cc -- some excercise about multiarray, using type alias
#include <iostream>
using std::cout; using std::endl;
using std::begin; using std::end;

int main()
{
    // excercise 1
    int ma1[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };
    using int_array = int[4];
    // version1 -- use for scale
    for (int_array &row : ma1)
        for (int &col : row) {
            cout << col << " ";
        }
    cout << endl;
    //version2 -- use for subscript
    for (int i = 0; i != 3; ++i)
        for (int j = 0; j != 4; ++j)
            cout << ma1[i][j] << " ";
    cout << endl;
    //version3 -- use for pointer
    for (int_array *p = begin(ma1); p != end(ma1); ++p)
        for (int *q = begin(*p); q != end(*p); ++q)
            cout << *q << " ";
    cout << endl;


}
// array2.cc -- test the pointer in array
#include <iostream>
#include <cstddef>
using std::cout; using std::endl; using std::begin; using std::end;

int main()
{
    int ia[] = {0, 1, 2, 3, 4, 5};
    int *p1 = begin(ia);
    int *p2 = end(ia);

    for (p1; p1 != p2; ++p1) {
        *p1 = 0;
         cout << *p1 << endl;
    }
        
    return 0;
    
}
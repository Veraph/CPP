// array3.cc -- equality between arrays and between vectors
#include <iostream>
#include <vector>
#include <cstddef>
using std::vector; using std::cout; using std::endl;

int main()
{
    // compare arrays
    int a1[] = {0, 1, 2, 3, 4, 5};
    int a2[] = {0, 1, 2, 3, 4, 5};
    if (a1 == a2) 
        cout << "array same!" << endl;
    else
        cout << "array not same!" << endl;

    // compare vectors
    vector<int> v1 = {0, 1, 2, 3, 4, 5};
    vector<int> v2 = {0, 1, 2, 3, 4, 5};
    if (v1 == v2) 
        cout << "vector same!" << endl;
    else
        cout << "vector not same!" << endl;

    return 0;
    
}
// oldfor.cc -- the use of old style for loop
#include <iostream>
#include <vector>
using std::cout; using std::endl; using std::vector;

int main()
{
    vector<int> v1 = {0, 1, 2, 3, 7};
    vector<int> v2 = {0, 2, 1, 3, 4, 5, 6};

    int count = 0;
    for (auto b1 = v1.begin(); b1 != v1.end(); ++b1) {
        for (auto b2 = v2.begin(); b2 != v2.end(); ++b2) {
            count += (*b1 == *b2) ? 1 : 0;
        }
    }

    if (count == v1.end() - v1.begin())
        cout << "true" << endl;
    else
        cout << "false" << endl;
    
    return 0;
}
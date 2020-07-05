// logic.cc -- investigate the logic in c++
#include <iostream>
using std::cin; using std::cout; using std::endl;

int main()
{
    int i = 1, j = 2, k = 3;
    if (i != j < k)
        cout << "h?" << endl;
    int num;
    while (cin >> num) {
        if (num == 42) {
            cout << endl;
            return 0;
        } else
            cout << num << " ";
    }
}
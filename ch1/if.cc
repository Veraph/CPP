// if.cc -- example of if statement
#include <iostream>

int main()
{
    using namespace std;

    int currVal = 0, val = 0;
    // the if loop only read the first num
    if (cin >> currVal) {
        int cnt = 1;
        while (cin >> val) {
            // if only one statement below a loop, can drop{}
            if (val == currVal)
                ++cnt;
            else {
                cout << currVal << " occurs "
                     << cnt << " times" << endl;
                currVal = val;
                cnt = 1;
            }
        }
        cout << currVal << " occurs "
             << cnt << " times" << endl;
    }
    return 0;
}
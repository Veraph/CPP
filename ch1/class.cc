// class.cc -- example of using class
#include <iostream>
#include "Sales_item.h"

int main()
{
    using namespace std;

    Sales_item total;
    // ensure have input
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    } else {
        // warn user if no input
        cerr << "No data!" << endl;
        return -1;
    }
    return 0;
}
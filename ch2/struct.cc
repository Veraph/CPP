// struct.cc -- the property of struct
#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
    using namespace std;

    Sales_data total;
    double total_price;

    if (cin >> total.book_no >> total.units_sold >> total_price) {
        total.revenue = total_price * total.units_sold;

        Sales_data trans;
        double trans_price;
        while (cin >> trans.book_no >> trans.units_sold >> trans_price) {
            trans.revenue = trans_price * trans.units_sold;
            if (total.book_no == trans.book_no){
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.book_no << total.units_sold << total.revenue << endl;
                total = trans;
            }                
        }
        // print the last item
        cout << total.book_no << total.units_sold << total.revenue << endl;
    } else {
        cerr << "Data Need!" << endl;
        return -1;
    }
    return 0;
}
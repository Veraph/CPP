// practice1.cpp -- display time get from user
#include <iostream>

int main()
{
    using namespace std;

    int hour;
    // every time you use the cout, it will automatically reuqest
    // a new line
    cout << "Please enter the number of hours: ";
    cin >> hour;
    cout << "Please enter the number of minutes: ";
    int minutes;
    cin >> minutes;
    cout << "Time: "
         << hour
         << " : "
         << minutes
         << endl;
    
    return 0;
}
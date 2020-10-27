// 2_2.cpp input and output precise time
# include <iostream>
using namespace std;

struct MyTimeStruct {
    unsigned int year;
    unsigned int month;
    unsigned int day;

    unsigned int hour;
    unsigned int min;
    unsigned int sec;
};

int main(){

    MyTimeStruct mytime = {2020, 10, 27, 16, 34, 0};
    int temp = 0;

    cout << "Please input the year: " << endl;
    cin >> mytime.year;

    cout << "Please input the month: " << endl;
    cin >> temp;
    while (temp > 12 || temp < 0) {
        cout << "Not valid, input again: " << endl;
        cin >> temp;
    }
    mytime.month = temp;

    cout << "Please input the day: " << endl;
    cin >> mytime.day;

    cout << "Please input the hour: " << endl;
    cin >> mytime.hour;

    cout << "Please input the min: " << endl;
    cin >> mytime.min;

    cout << "Please input the sec: " << endl;
    cin >> mytime.sec;    

    cout << "The new time is: " << mytime.year << "."
                                << mytime.month << "."
                                << mytime.day << " "
                                << mytime.hour << ":"
                                << mytime.min << ":"
                                << mytime.sec << endl;
    
    return 0;

}
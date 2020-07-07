// if.cc -- investigate ifesle statement
#include <iostream>
#include <vector>
using std::string; using std::cout; using std::endl;
using std::vector; using std::cin;

int main ()
{
    int score;
    string lettergrade;
    const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

    while (cin >> score) {
        if (score < 60)
            lettergrade = scores[0];
        else {
            lettergrade = scores[(score - 50) / 10];
            if (score != 100) {
                if (score % 10 > 7)
                    lettergrade += '+';
                else if (score % 10 < 3)
                    lettergrade += '-'; 
            }
        }
        cout << lettergrade << endl;
    }

    return 0;
}
// condi.cc -- using condition ?: to replace ifesle statement
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
        lettergrade = (score < 60) ? scores[0]
                                   : (score % 10 > 7) ? (scores[(score - 50) / 10] + '+')
                                   : (score % 10 < 3 && score != 100) ? (scores[(score - 50) / 10] + '-')
                                   : scores[(score - 50) / 10];
        cout << lettergrade << endl;
    }

    return 0;
} 
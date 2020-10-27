// simulate the hanoi function
# include <iostream>
using namespace std;

void move(char src, char des) {
    cout << src << "-->" << des << endl;
}

void hanoi(unsigned n, char src, char mid, char des) {
    if (n == 1)
        move(src, des);
    else {
        hanoi(n - 1, src, des, mid);
        move(src, des);
        hanoi(n - 1, mid, src, des);
    }
        
}


int main() {
    unsigned n;
    
    cout << "Input the number of plates you want to play: " << endl;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    cout << "Finished" << endl;
    return 0;
}
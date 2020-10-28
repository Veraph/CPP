// 4_2.cpp try const object and const functions

# include <iostream>
using namespace std;

class Money {
    private:
    int chn;
    int jan;

    public:
    Money(int c, int j) {
        chn = c;
        jan = j;
    }
    Money(){}
    ~Money(){}

    void print() const {cout << chn << jan << endl;}

};

int main() {
    const Money A(1, 99);
    Money B(2, 55);
    A.print();
    B.print();
}
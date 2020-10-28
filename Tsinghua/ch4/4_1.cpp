// write a RAM class and a CDROM class
# include <iostream>
using namespace std;

enum RamType {DDR4 = 1, DDR3, DDR2};
class RAM {
    private:
    unsigned volume;
    RamType type;
    float power;

    public:
    // simple variable can be initialized in side {}
    // class variable can be copy intialized after :
    RAM(unsigned vol, RamType ty, float pow): 
        volume(vol), type(ty), power(pow) {
            cout << "Construct using constructor" << endl;
        };

    RAM(){
        cout << "Construct using default constructor" << endl;
    };

    ~RAM() {
        cout << "de constructed." << endl;
    };

    RamType getRam() const {return type;}
    unsigned getVol() const {return volume;}
    float getPow() const {return power; }
};

int main() {
    RAM test(999, DDR2, 2.4);
    test.getPow();
    test.getVol();
    test.getRam();

    return 0;
}
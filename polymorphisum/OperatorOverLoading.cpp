#include<iostream>
using namespace std;

class complex {
private:
    int x;

public:
    // Constructor
    complex(int a = 0) {
        x = a;
    }

    // Operator overloading +
    complex operator +(complex obj) {
        complex temp;
        temp.x = x + obj.x;
        return temp;
    }

    void show() {
        cout << x;
    }
};

int main() {
    complex a(5), b(6), c;

    c = a + b;
    c.show();   // Output: 11
}

#include <iostream>

using namespace std;

class point {

    double x;
    double y;

    public:
    // Constructor
    point(double x = 0.0, double y = 0.0):x(x),y(y){}

    double getx(){return x;}
    double gety(){return y;}

};

// Overload operator << 
ostream& operator<< (ostream& out, point& p) {
    out << "(" << p.getx() << "," << p.gety() << ")";
    return out;
}

int main() {

    point p1(1.1);
    point p2(1.1, 2.2);

    cout << "p1 is: " << p1 << endl;
    cout << "p2 is: " << p2 << endl;

    return 0;
}
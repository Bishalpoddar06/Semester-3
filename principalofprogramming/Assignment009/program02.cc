/*
Create a class Rectangle with private member variables length (double) and width (double). Implement:
A default constructor that initializes both length and width to 0.0.
A parameterized constructor that takes one argument (double side) and initializes both length and width to side (for a square).
Another parameterized constructor that takes two arguments (double l, double w) and initializes length to l and width to w.
A calculateArea() method to return the area of the rectangle.
In main(), create Rectangle objects using each of the three constructors and print their areas.
*/

#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, width;

public:
    // Default Constructor
    Rectangle() {
        length = width = 0.0;
    }

    // Parameterized Constructor (Square)
    Rectangle(double side) {
        length = width = side;
    }

    // Parameterized Constructor (Rectangle)
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle r1;          // Default
    Rectangle r2(5.0);     // Square
    Rectangle r3(4.0, 6.0); // Rectangle

    cout << "Areas of Rectangles:\n";
    cout << "Default: " << r1.calculateArea() << endl;
    cout << "Square: " << r2.calculateArea() << endl;
    cout << "Rectangle: " << r3.calculateArea() << endl;

    return 0;
}

/*
----OUTPUT----
Areas of Rectangles:
Default: 0
Square: 25
Rectangle: 24
*/
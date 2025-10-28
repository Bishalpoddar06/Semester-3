/*
3.  Create a class Point with private member variables x and y (integers). Implement:
A parameterized constructor that initializes x and y.
A copy constructor that takes another Point object as a const reference and copies its x and y values.
A display() method to print the point's coordinates.
In main(), create a Point object, then create another Point object using the copy constructor, and display both.
*/

#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    // Copy Constructor
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    // Display Method
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(3, 7); // Parameterized constructor
    Point p2(p1);   // Copy constructor

    cout << "Points:\n";
    p1.display();
    p2.display();

    return 0;
}

/*
----OUTPUT----
Points:
(3, 7)
(3, 7)
*/
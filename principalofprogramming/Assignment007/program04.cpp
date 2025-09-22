/*
Problem 4: Hierarchical Inheritance

Statement:
Create a base class Shape. Derive three classes: Circle, Rectangle, and
Triangle. Each derived class should have its own area() function. Input
dimensions and calculate area of each shape.
*/

#include <iostream>
#include <string>
using namespace std;

class Shape {};

class Circle : public Shape {
 public:
  float r;
  void area() { cout << "Area of circle : " << 3.14 * r * r << endl; }
};

class Rectangle : public Shape {
 public:
  float l, b;
  void area() { cout << "Area of rectangle : " << l * b << endl; }
};

class Triangle : public Shape {
 public:
  float b, h;
  void area() { cout << "Area of triangle : " << 0.5 * b * h << endl; }
};

int main() {
  Circle c;
  cout << "Enter dimensions of circle : " << endl;
  cin >> c.r;
  c.area();

  Rectangle r;
  cout << "Enter dimensions of rectangle : " << endl;
  cin >> r.l >> r.b;
  r.area();

  Triangle t;
  cout << "Enter dimensions of triangle : " << endl;
  cin >> t.b >> t.h;
  t.area();

  return 0;
}

/* OUTPUT
Enter dimensions of circle :
5
Area of circle : 78.5
Enter dimensions of rectangle :
2 4
Area of rectangle : 8
Enter dimensions of triangle :
4 5
Area of triangle : 10
*/
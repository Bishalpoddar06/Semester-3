/*
Create a class Book with private member variables title (string) and author (string). Implement:
A default constructor that initializes title to "Unknown" and author to "Anonymous".
A parameterized constructor that takes title and author as arguments and initializes the member variables accordingly.
A display() method to print the book's title and author.
In main(), create one Book object using the default constructor and another using the parameterized constructor, then display their details.

Create a class Rectangle with private member variables length (double) and width (double). Implement:
A default constructor that initializes both length and width to 0.0.
A parameterized constructor that takes one argument (double side) and initializes both length and width to side (for a square).
Another parameterized constructor that takes two arguments (double l, double w) and initializes length to l and width to w.
A calculateArea() method to return the area of the rectangle.
In main(), create Rectangle objects using each of the three constructors and print their areas.

3.  Create a class Point with private member variables x and y (integers). Implement:
A parameterized constructor that initializes x and y.
A copy constructor that takes another Point object as a const reference and copies its x and y values.
A display() method to print the point's coordinates.
In main(), create a Point object, then create another Point object using the copy constructor, and display both.
*/

#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    Book()
    {
        title = "Game of Thrones";
        author = "Jorge Martin";
    }

    Book(string t, string a)
    {
        title = t;
        author = a;
    }

    void display() const
    {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

class Rectangle
{
private:
    double length, width;

public:
    Rectangle()
    {
        length = width = 0.0;
    }

    Rectangle(double side)
    {
        length = width = side;
    }

    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double calculateArea() const
    {
        return length * width;
    }
};

class Point
{
private:
    int x, y;

public:
    Point(int xVal, int yVal)
    {
        x = xVal;
        y = yVal;
    }

    Point(const Point &p)
    {
        x = p.x;
        y = p.y;
    }

    void display() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main()
{ 
    Book b1;
    Book b2("Hall of Fame", "George Orwell");
    cout << "Books:\n";
    b1.display();
    b2.display();

    Rectangle r1;
    Rectangle r2(5.0);
    Rectangle r3(4.0, 6.0);
    cout << "\nRectangle Areas:\n";
    cout << "Default: " << r1.calculateArea() << endl;
    cout << "Square: " << r2.calculateArea() << endl;
    cout << "Rectangle: " << r3.calculateArea() << endl;

    Point p1(3, 7);
    Point p2(p1);
    cout << "\nPoints:\n";
    p1.display();
    p2.display();

    return 0;
}

/*
-----OUTPUT-----
Books:
Title: Game of Thrones, Author: Jorge Martin
Title: Hall of Fame, Author: George Orwell

Rectangle Areas:
Default: 0
Square: 25
Rectangle: 24

Points:
(3, 7)
(3, 7)
*/
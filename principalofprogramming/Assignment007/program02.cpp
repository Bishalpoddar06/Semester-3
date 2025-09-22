/*
Problem 2: Multiple Inheritance

Statement:
Create two classes:

Teacher (with subject, salary)

Researcher (with researchArea, publications).
Derive a class Professor from both. Write functions to input and display all
information of a Professor.
*/

#include <iostream>
#include <string>
using namespace std;

class Teacher {
 public:
  string subject;
  float salary;
};

class Researcher {
 public:
  string researchArea;
  string publications;
};

class Professor : public Teacher, public Researcher {
 public:
  void input();
  void display();
};

void Professor::input() {
  cout << "Enter professor details..." << endl;
  cout << "Subject : ";
  cin >> subject;
  cout << "Salary  : ";
  cin >> salary;
  cout << "Research Area : ";
  cin >> researchArea;
  cout << "Publications  : ";
  cin >> publications;
}

void Professor::display() {
  cout << "Displaying professor details..." << endl;
  cout << "Subject : " << subject << endl;
  cout << "Salary  : " << salary << endl;
  cout << "Research Area : " << researchArea << endl;
  cout << "Publications  : " << publications << endl;
}

int main() {
  Professor p;

  p.input();
  p.display();

  return 0;
}

/* OUTPUT
Enter professor details...
Subject : Physics
Salary  : 60000
Research Area : IC
Publications  : Bloomberg
Displaying professor details...
Subject : Physics
Salary  : 60000
Research Area : IC
Publications  : Bloomberg
*/
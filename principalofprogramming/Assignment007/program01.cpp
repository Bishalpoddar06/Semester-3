/*
Problem 1: Single Inheritance

Statement:
Create a base class Person with data members name and age. Derive a class
Student that adds marks and grade. Write a program to input and display the
details of a student.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
 public:
  string name;
  int age;
};

class Student : public Person {
 public:
  float marks;
  char grade;
};

int main() {
  Student s;

  cout << "Enter student details..." << endl;
  cout << "Name : ";
  cin >> s.name;
  cout << "Age : ";
  cin >> s.age;
  cout << "Marks : ";
  cin >> s.marks;
  cout << "Grade : ";
  cin >> s.grade;

  cout << "Printing details..." << endl;
  cout << "Name  : " << s.name << endl;
  cout << "Age   : " << s.age << endl;
  cout << "Marks : " << s.marks << endl;
  cout << "Grade : " << s.grade << endl;

  return 0;
}

/* OUTPUT
Enter student details...
Name : John
Age : 19
Marks : 90
Grade : B
Printing details...
Name  : John
Age   : 19
Marks : 90
Grade : B
*/
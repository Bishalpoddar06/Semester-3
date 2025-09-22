/*
Problem 5: Hybrid Inheritance

Statement:
Create a base class Student with roll number and name. Derive class Exam from
Student to store marks of 5 subjects. Derive another class Sports (not from
Student) to store sports marks. Create a class Result that inherits from both
Exam and Sports and displays the total marks.
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
 public:
  int roll;
  string name;
};

class Exam : public Student {
 public:
  float marks[5];
};

class Sports {
 public:
  float sportsMarks;
};

class Result : public Exam, public Sports {
 public:
  void getTotalMarks();
};

void Result::getTotalMarks() {
  float total = 0;
  for (int i = 0; i < 4; i++) total += marks[i];
  total += sportsMarks;
  cout << "Total marks : " << total << endl;
}

/*
----INPUT----
Enter roll and name: 101 Riya
Enter 5 subject marks: 80 90 75 85 70
Enter sports marks: 40

----OUTPUT----
Roll: 101, Name: Riya
Total Marks: 440
*/
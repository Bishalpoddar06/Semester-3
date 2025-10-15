/*
You are asked to create a Library Management System using inheritance:

Base class Book with title, author, and price.

Derived class EBook with additional members fileSize and format.

Derived class PrintedBook with additional members weight and stock.
Write a program to input and display both types of books.
*/

#include <iostream>
using namespace std;

class Book {
 public:
  char title[100];
  char author[100];
  float price;
};

class EBook : public Book {
 public:
  int fileSize;
  char format[50];
};

class PrintedBook : public Book {
 public:
  float weight;
  int stock;
};

int main() {
  EBook eb;

  cout << "Enter Ebook Details..." << endl;

  cout << "Title : ";
  cin >> eb.title;
  cout << "Author : ";
  cin >> eb.author;
  cout << "Price : ";
  cin >> eb.price;
  cout << "File Size : ";
  cin >> eb.fileSize;
  cout << "Format : ";
  cin >> eb.format;

  PrintedBook pb;

  cout << "Enter Printed Book Details..." << endl;

  cout << "Title : ";
  cin >> pb.title;
  cout << "Author : ";
  cin >> pb.author;
  cout << "Price : ";
  cin >> pb.price;
  cout << "Weight : ";
  cin >> pb.weight;
  cout << "Stock : ";
  cin >> pb.stock;

  cout << "Printing Details..." << endl;

  cout << "EBook :-" << endl;

  cout << "Title : " << eb.title << endl;
  cout << "Author : " << eb.author << endl;
  cout << "Price : " << eb.price << endl;
  cout << "File Size : " << eb.fileSize << endl;
  cout << "Format : " << eb.format << endl;

  cout << "Printed Book :-" << endl;

  cout << "Title : " << pb.title << endl;
  cout << "Author : " << pb.author << endl;
  cout << "Price : " << pb.price << endl;
  cout << "Weight : " << pb.weight << endl;
  cout << "Stock : " << pb.stock << endl;
}

/* OUTPUT
Enter Ebook Details...
Title : Title1
Author : Author1
Price : 500
File Size : 240
Format : PDF
Enter Printed Book Details...
Title : Title2
Author : Author2
Price : 600
Weight : 200
Stock : 20
Printing Details...
EBook :-
Title : Title1
Author : Author1
Price : 500
File Size : 240
Format : PDF
Printed Book :-
Title : Title2
Author : Author2
Price : 600
Weight : 200
Stock : 20
*/
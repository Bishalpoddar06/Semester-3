/*
Create a class Book with private member variables title (string) and author (string). Implement:
A default constructor that initializes title to "Unknown" and author to "Anonymous".
A parameterized constructor that takes title and author as arguments and initializes the member variables accordingly.
A display() method to print the book's title and author.
In main(), create one Book object using the default constructor and another using the parameterized constructor, then display their details.
*/

#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    Book() {
        title = "The Game";
        author = "James";
    }

    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book b1;                          
    Book b2("1920 London", "George Orwell"); 
    cout << "Book Details:\n";
    b1.display();
    b2.display();

    return 0;
}

/*
----OUTPUT----
Book Details:
Title: The Game, Author: James
Title: 1920 London, Author: George Orwell
*/
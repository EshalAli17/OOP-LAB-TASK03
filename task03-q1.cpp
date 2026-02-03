#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
  
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string t, string a = "Unknown", double p = 0.0) {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b1;                                   
    Book b2("Fairy Tale","Eshal" , 9.99);    
    Book b3(b2);                              
    Book b4("Snow White");             

    cout << "Book 1:" << endl;
    b1.display();

    cout << "Book 2:" << endl;
    b2.display();

    cout << "Book 3:" << endl;
    b3.display();

    cout << "Book 4:" << endl;
    b4.display();

    return 0;
}


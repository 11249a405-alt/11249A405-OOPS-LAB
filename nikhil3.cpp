#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string author;
    int pages;
public:
    void setDetails(string t, string a, int p);
    void displayDetails();
};

// Member function definitions outside the class
void Book::setDetails(string t, string a, int p) {
    title = t;
    author = a;
    pages = p;
}

void Book::displayDetails() {
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Pages: " << pages << endl;
}

int main() {
    Book b1;
    string t, a;
    int p;

    cout << "Enter Book Title: ";
    getline(cin, t);
    cout << "Enter Author Name: ";
    getline(cin, a);
    cout << "Enter Number of Pages: ";
    cin >> p;

    b1.setDetails(t, a, p);
    cout << "\nBook Details:\n";
    b1.displayDetails();

    return
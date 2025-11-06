#include <iostream>
#include <string>
using namespace std;

class BookDetails {
    int year, cost;
    string title, author;
public:
    void read();
    void display();
    // You can implement update() and compare() as needed
};

void BookDetails::read() {
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter cost: ";
    cin >> cost;
    cin.ignore(); // Clear input buffer
}

void BookDetails::display() {
    cout << "\nTitle: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Cost: " << cost << endl;
}

int main() {
    BookDetails b;
    b.read();
    b.display();
    return 0;
{
    BookDetails b;
}
    s.read();
    s.calculate();
    s.display();
    return 0;
}
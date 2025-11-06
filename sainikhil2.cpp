#include <iostream>
#include <string>
using namespace std;

class student_info {
    string studentname;
    int regnumber, m1, m2, m3, total;
    float percentage;
public:
    void read();
    void calculate();
    void display();
};

void student_info::read() {
    cout << "Enter student name: ";
    getline(cin, studentname);
    cout << "Enter register number: ";
    cin >> regnumber;
    cout << "Enter marks in subject 1: ";
    cin >> m1;
    cout << "Enter marks in subject 2: ";
    cin >> m2;
    cout << "Enter marks in subject 3: ";
    cin >> m3;
    cin.ignore(); // To clear newline from input buffer
}

void student_info::calculate() {
    total = m1 + m2 + m3;
    percentage = (total / 300.0f) * 100;
}

void student_info::display() {
    cout << "\nStudent Name: " << studentname << endl;
    cout << "Register Number: " << regnumber << endl;
    cout << "Marks in Subject 1: " << m1 << endl;
    cout << "Marks in Subject 2: " << m2 << endl;
    cout << "Marks in Subject 3: " << m3 << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    cout << "Grade: ";
    if (percentage >= 90)
        cout << "S";
    else if (percentage >= 80)
        cout << "A";
    else if (percentage >= 70)
        cout << "B";
    else if (percentage >= 60)
        cout << "C";
    else if (percentage >= 50)
        cout << "D";
    else
        cout << "Fail";
    cout << endl;
}

int main() {
    student_info s;
    s.read();
    s.calculate();
    s.display();
    return 0;
}
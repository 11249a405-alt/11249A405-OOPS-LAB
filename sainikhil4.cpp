#include <iostream>
using namespace std;

class employee {
    int empid;
    char name[20];
    float salary;
public:
    void read();
    void display();
};

void employee::read() {
    cout << "Enter employee id: ";
    cin >> empid;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter salary: ";
    cin >> salary;
}

void employee::display() {
    cout << "\nEmployee id: " << empid << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}

int main() {
    employee e;
    e.read();
    e.display();
    return 0;
}
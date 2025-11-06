#include <iostream>
using namespace std;
class Num {
    int v;
public:
    Num(int x = 0) : v(x) {}

    // binary + as a member
    Num operator+(const Num& other) const { return Num(v + other.v); }

    // binary * as a friend
    friend Num operator*(const Num& a, const Num& b) { return Num(a.v * b.v); }

    friend std::ostream& operator<<(std::ostream& os, const Num& n) { return os << n.v; }
};

int main() {
    Num a(3), b(4);
    cout << a << " + " << b << " = " << (a + b) << '\n';
    cout << a << " * " << b << " = " << (a * b) << '\n';
    return 0;
}
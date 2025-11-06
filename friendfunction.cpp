#include <iostream>

class Num {
    int v;
public:
    Num(int x = 0) : v(x) {}
    friend Num operator+(const Num& a, const Num& b);
    friend std::ostream& operator<<(std::ostream& os, const Num& n) { return os << n.v; }
};

Num operator+(const Num& a, const Num& b) { return Num(a.v + b.v); }

int main() {
    Num a(3), b(6);
    std::cout << a << " + " << b << " = " << (a + b) << '\n';
    return 0;
}
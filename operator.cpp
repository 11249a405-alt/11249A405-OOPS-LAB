#include <iostream>

class Num {
    int v;
public:
    Num(int x = 0) : v(x) {}
    // unary minus
    Num operator-() const { return Num(-v); }
    // prefix ++
    Num& operator++() { ++v; return *this; }
    // postfix ++
    Num operator++(int) { Num tmp(*this); ++v; return tmp; }

    // friend stream output
    friend std::ostream& operator<<(std::ostream& os, const Num& n) {
        return os << n.v;
    }

    // friend binary plus - can access private member v
    friend Num operator+(const Num& a, const Num& b);
};

Num operator+(const Num& a, const Num& b) {
    return Num(a.v + b.v);
}

int main() {
    Num n1(3), n2(4);
    std::cout << "n1 = " << n1 << '\n';
    std::cout << "n2 = " << n2 << '\n';
    std::cout << "n1 + n2 = " << (n1 + n2) << '\n';
    std::cout << "-n1 = " << -n1 << '\n';
    std::cout << "++n1 = " << ++n1 << '\n';
    std::cout << "n1++ = " << n1++ << " (returns old)\n";
    std::cout << "now n1 = " << n1 << '\n';
    return 0;
}
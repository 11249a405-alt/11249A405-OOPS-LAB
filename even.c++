#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n)) return 0;
    if (n % 2 == 0)
        std::cout << n << " is even\n";
    else
        std::cout << n << " is odd\n";
    return 0;
}

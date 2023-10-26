#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int q = a / b;
    int r = a % b;

    if (r < 0 && b > 0) {
        q--;
        r = a - (b * q);
    } else if (r < 0 && b < 0) {
        q++;
        r = a - (b * q);
    }

    std::cout << q << " " << r << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int m, n;

    std::cout << "Nhập chiều cao (m): ";
    if (!(std::cin >> m) || m <= 0) {
        std::cout << "Chiều cao không hợp lệ.\n";
        return 1;
    }

    std::cout << "Nhập chiều rộng (n): ";
    if (!(std::cin >> n) || n <= 0) {
        std::cout << "Chiều rộng không hợp lệ.\n";
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }

    return 0;
}

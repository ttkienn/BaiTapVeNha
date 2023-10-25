#include <iostream>

int main() {
    int N;
    std::cin >> N;

    std::cout << N << std::endl;

    int denominations[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; i++) {
        int count = N / denominations[i];
        N %= denominations[i];
        std::cout << count << " to R$ " << denominations[i] << ",00" << std::endl;
    }

    return 0;
}

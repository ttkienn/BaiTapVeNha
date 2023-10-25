#include <iostream>

int main() {
    int N;
    std::cin >> N;

    if (N <= 5 || N >= 2000) {
        return 1;
    }

    for (int i = 2; i <= N; i += 2) {
        int square = i * i;
        std::cout << i << " ^ 2 = " << square << std::endl;
    }

    return 0;
}

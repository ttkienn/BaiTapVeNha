#include <iostream>

int main() {
    long long N, K;
    std::cin >> N >> K;

    while (K > 0) {
        if (N % 10 != 0) {
            N -= 1;
        } else {
            N /= 10;
        }
        K--;
    }

    std::cout << N << std::endl;

    return 0;
}

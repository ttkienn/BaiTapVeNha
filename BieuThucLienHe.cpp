#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++) {
        std::cout << "Ho";
        if (i < n) {
            std::cout << " ";
        }
    }
    
    std::cout << "!" << std::endl;
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;

    int damage = 0;
    int punches = 0;

    while (X >= damage) {
        punches++;
        damage += punches;
        X -= damage;
    }

    cout << punches << endl;

    return 0;
}

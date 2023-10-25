#include <iostream>

using namespace std;

int main() {
    int M, N;

    while (true) {
        cin >> M >> N;

        if (M <= 0 || N <= 0) {
            break;
        }

        int smaller, larger, total = 0;

        if (M < N) {
            smaller = M;
            larger = N;
        } else {
            smaller = N;
            larger = M;
        }

        for (int i = smaller; i <= larger; i++) {
            total += i;
            cout << i;
            if (i < larger) {
                cout << " ";
            } else {
                cout << " ";
            }
        }

        cout << "Tong=" << total << endl;
    }

    return 0;
}

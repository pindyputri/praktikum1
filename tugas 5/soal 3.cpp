#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam deret: ";
    cin >> n;

    double S = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            S += 1.0 / i;
        } else {
            S -= 1.0 / i;
        }
    }

    cout << "Nilai dari deret adalah: " << S << endl;

    return 0;
}


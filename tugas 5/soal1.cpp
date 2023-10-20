#include <iostream>
using namespace std;

int main() {
    int data[10];
    int total = 0;
    int min, max;

    // Meminta pengguna untuk memasukkan data
    cout << "Masukkan sepuluh data:" << endl;
    for(int i = 0; i < 10; i++) {
        cin >> data[i];
        total += data[i];

        if (i == 0) {
            min = max = data[i];
        } else {
            if (data[i] < min) {
                min = data[i];
            }
            if (data[i] > max) {
                max = data[i];
            }
        }
    }

    double rata_rata = static_cast<double>(total) / 10;

    // Menampilkan hasil
    cout << "Nilai rata-rata: " << rata_rata << endl;
    cout << "Nilai terkecil: " << min << endl;
    cout << "Nilai terbesar: " << max << endl;

    return 0;
}

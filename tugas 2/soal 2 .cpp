#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
    cout << "Masukkan bilangan ketiga: ";
    cin >> bilangan3;

    // Membandingkan bilangan untuk menemukan yang paling maksimal
    int maksimal = bilangan1;

    if (bilangan2 > maksimal) {
        maksimal = bilangan2;
    }

    if (bilangan3 > maksimal) {
        maksimal = bilangan3;
    }

    // Menampilkan bilangan yang paling maksimal
    cout << "Bilangan paling maksimal adalah: " << maksimal << endl;

    return 0;
}

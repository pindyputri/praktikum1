#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    if (n >= 0) {
        int hasil = faktorial(n);
        cout << n << "! = " << hasil << endl;
    } else {
        cout << "Maaf, faktorial dari bilangan negatif tidak terdefinisi." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    float nilai_tes, nilai_uts, nilai_uas, nilai_tugas, nilai_akhir;
    char indeks_nilai;

    // Meminta input dari pengguna
    cout << "Masukkan nilai tes (0-100): ";
    cin >> nilai_tes;
    cout << "Masukkan nilai UTS (0-100): ";
    cin >> nilai_uts;
    cout << "Masukkan nilai UAS (0-100): ";
    cin >> nilai_uas;
    cout << "Masukkan nilai tugas (0-100): ";
    cin >> nilai_tugas;

    // Menghitung nilai akhir
    nilai_akhir = 0.2 * nilai_tes + 0.3 * nilai_uts + 0.3 * nilai_uas + 0.2 * nilai_tugas;

    // Mengonversi nilai akhir ke indeks nilai
    if (nilai_akhir <= 50) {
        indeks_nilai = 'D';
    } else if (nilai_akhir <= 70) {
        indeks_nilai = 'C';
    } else if (nilai_akhir <= 80) {
        indeks_nilai = 'B';
    } else {
        indeks_nilai = 'A';
    }

    // Menampilkan hasil
    cout << "Nilai akhir: " << nilai_akhir << endl;
    cout << "Indeks nilai: " << indeks_nilai << endl;

    return 0;
}
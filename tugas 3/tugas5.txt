#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi variabel
    string nama_karyawan;
    int tipe_rumah, jumlah_terjual;
    double bonus = 0;

    // Meminta input dari pengguna
    cout << "Masukkan nama karyawan: ";
    getline(cin, nama_karyawan);

    cout << "Masukkan tipe rumah (45, 54, atau 70): ";
    cin >> tipe_rumah;

    cout << "Masukkan jumlah rumah yang terjual: ";
    cin >> jumlah_terjual;

    // Menghitung bonus
    if (tipe_rumah == 45) {
        if (jumlah_terjual > 5) {
            bonus = 250000 * jumlah_terjual;
        } else if (jumlah_terjual >= 1) {
            bonus = 500000 * jumlah_terjual;
        }
    } else if (tipe_rumah == 54) {
        if (jumlah_terjual > 5) {
            bonus = 1000000 * jumlah_terjual;
        } else if (jumlah_terjual >= 1) {
            bonus = 500000 * jumlah_terjual;
        }
    } else if (tipe_rumah == 70) {
        if (jumlah_terjual > 5) {
            bonus = 1250000 * jumlah_terjual;
        } else if (jumlah_terjual >= 1) {
            bonus = 1000000 * jumlah_terjual;
        }
    } else {
        cout << "Tipe rumah tidak valid." << endl;
        return 0;
    }

    // Menampilkan hasil
    cout << "Total Bonus yang diterima " << nama_karyawan << " = Rp. " << bonus << endl;

    return 0;
}
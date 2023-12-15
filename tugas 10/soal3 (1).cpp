#include <iostream>
#include <string>
using namespace std;

const int JUMLAH_BARANG = 10;

struct Barang {
    string nama;
    int harga;
    int jumlahTerjual;
    int total;
};

int main() {
    Barang daftarBarang[JUMLAH_BARANG];
    int totalPenjualan = 0, maxTerjual = 0, indexMaxTerjual = 0;

    // Input data penjualan barang
    for (int i = 0; i < JUMLAH_BARANG; ++i) {
        cout << "Nama barang ke-" << i + 1 << ": ";
        cin >> daftarBarang[i].nama;
        cout << "Harga per item: ";
        cin >> daftarBarang[i].harga;
        cout << "Jumlah terjual: ";
        cin >> daftarBarang[i].jumlahTerjual;
        daftarBarang[i].total = daftarBarang[i].harga * daftarBarang[i].jumlahTerjual;
        totalPenjualan += daftarBarang[i].total;
        if (daftarBarang[i].jumlahTerjual > maxTerjual) {
            maxTerjual = daftarBarang[i].jumlahTerjual;
            indexMaxTerjual = i;
        }
    }

    // Output total penjualan dan item terlaris
    cout << "Total penjualan hari ini: Rp." << totalPenjualan << endl;
    cout << "Item terbanyak terjual: " << daftarBarang[indexMaxTerjual].nama << " (Item " << indexMaxTerjual + 1 << ")" << endl;

    return 0;
}

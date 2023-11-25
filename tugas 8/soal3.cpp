#include <iostream>
#include <string>
using namespace std;

struct Penjualan {
    string kode_brg;
    string nama_brg;
    int jumlah;
    int harga_satuan;
};

int main() {
    Penjualan data[20] = {{"BJ001", "Baju Kemeja", 4, 100000}, {"BJ002", "Baju Tunik", 7, 200000}, {"Sp001", "Sepatu Pria", 10, 500000} /* tambahkan data record lainnya */};

    int totalHarga = 0;
    for (int i = 0; i < 20; i++) {
        totalHarga += data[i].jumlah * data[i].harga_satuan;
    }

    double keuntungan = 0.1 * totalHarga;

    cout << "Total harga penjualan: Rp." << totalHarga << endl;
    cout << "Keuntungan: Rp." << keuntungan << endl;

    return 0;
}
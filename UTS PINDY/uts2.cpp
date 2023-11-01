#include <iostream>
using namespace std;

int main() {
    // Inisialisasi variabel untuk jumlah dollar
    double tabungan_dollar;

    // b) Kurs mata uang
    double kurs_usd_to_idr = 15000.0;
   

    // Meminta pengguna untuk memasukkan jumlah dollar
    cout << "Masukkan jumlah dollar: ";
    cin >> tabungan_dollar;

    // Konversi tabungan ke Rupiah
    double total_tabungan_idr = tabungan_dollar * kurs_usd_to_idr;

    // c) Harga mobil dan perhitungan sisa uang
    double harga_mobil = 425000000.0;
    double sisa_uang = total_tabungan_idr - harga_mobil;

    // Menampilkan hasil perhitungan
    cout << "Total tabungan dalam Rupiah: " << total_tabungan_idr << endl;
    cout << "Sisa uang setelah membeli mobil: " << sisa_uang << endl;

    return 0;
}


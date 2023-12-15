#include <iostream>
using namespace std;

int main() {
    int daya_listrik = 2200;
    double tarif[] = {1350, 1440, 1450, 1500};
    int penggunaan_per_hari[] = {800, 200, 150, 250, 250, 100};
    int jumlah_hari = 30;

    double total_penggunaan = 0;
    for (int i = 0; i < 6; ++i) {
        total_penggunaan += penggunaan_per_hari[i];
    }

    double biaya_pembayaran = (total_penggunaan / 1000) * tarif[daya_listrik / 1000 - 1] * jumlah_hari;

    cout << "Biaya pembayaran listrik tiap bulannya adalah: Rp. " << biaya_pembayaran << endl;

return 0;
}
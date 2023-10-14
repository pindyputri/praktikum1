#include <iostream>
using namespace std;

int main() {
    double jarak = 750.0; // Jarak dalam kilometer
    double waktu = 20.0;  // Waktu dalam jam

    // Menghitung kecepatan
    double kecepatan = jarak / waktu;

    // Menampilkan hasil ke layar
    cout << "Kecepatan kendaraan Amir adalah: " << kecepatan << " km/jam" <<endl;

    return 0;
}
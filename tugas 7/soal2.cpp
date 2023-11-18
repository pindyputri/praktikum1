#include <iostream>
using namespace std;

// Fungsi untuk pencarian garis
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target)
            return i; // Jika elemen ditemukan, kembalikan indeksnya
    }
    // Jika elemen tidak ditemukan
    return -1;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> target;

    int result = linearSearch(arr, n, target);
    if (result == -1)
        cout << "Elemen tidak ditemukan";
    else
        cout << "Elemen ditemukan di indeks ke-" << result;

    return 0;
}





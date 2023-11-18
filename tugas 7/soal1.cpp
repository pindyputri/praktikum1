#include <iostream>
using namespace std;

// Fungsi untuk pencarian biner
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Jika elemen berada di tengah
        if (arr[mid] == target)
            return mid;

        // Jika elemen lebih kecil, cari di setengah kiri
        if (arr[mid] < target)
            left = mid + 1;
        // Jika elemen lebih besar, cari di setengah kanan
        else
            right = mid - 1;
    }
    // Jika elemen tidak ditemukan
    return -1;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array secara terurut:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> target;

    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1)
        cout << "Elemen tidak ditemukan";
    else
        cout << "Elemen ditemukan di indeks ke-" << result;

    return 0;
}





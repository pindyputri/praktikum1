#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, max_idx;
    for (i = 0; i < n - 1; i++) {
        max_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] > arr[max_idx])
                max_idx = j;
        swap(arr[max_idx], arr[i]);
    }
}

int main() {
    int arr[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Array yang sudah diurutkan secara menurun: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

struct Titik {
    int x;
    int y;
};

double hitungJarak(Titik titik1, Titik titik2) {
    return sqrt(pow(titik2.x - titik1.x, 2) + pow(titik2.y - titik1.y, 2));
}

int main() {
    Titik titik1 = {1, 2};
    Titik titik2 = {4, 6};

    cout << "Jarak antara titik (" << titik1.x << ", " << titik1.y << ") dan titik (" << titik2.x << ", " << titik2.y << ") adalah " << hitungJarak(titik1, titik2) << endl;

    return 0;
}
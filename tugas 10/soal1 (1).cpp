#include <iostream>
using namespace std;

int main() {
    int X = 10, Y = 23, temp;
    cout << "Sebelum pertukaran: X = " << X << ", Y = " << Y << endl;
    temp = X;
    X = Y;
    Y = temp;
    cout << "Setelah pertukaran: X = " << X << ", Y = " << Y << endl;
    return 0;
}
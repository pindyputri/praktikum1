
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan bilangan bulat a: ";
    cin >> a;
    cout << "Masukkan bilangan bulat b: ";
    cin >> b;
    cout << "Masukkan bilangan bulat c: ";
    cin >> c;

    int x = 1;
    int axSquare = a*x*x;
    int bx = b*x;
    int total = axSquare + bx + c;
    int result = 6 * total;
    cout << "Hasil 6*(ax^2 + bx + c) untuk x=1 adalah: " << result << endl;
    return 0;
}
#include <iostream>

int main() {
    double operand1, operand2;
    char operatorChar;

    // Membaca operand pertama
    std::cout << "Masukkan operand pertama: ";
    std::cin >> operand1;

    // Membaca operator
    std::cout << "Masukkan operator (+, -, *, /): ";
    std::cin >> operatorChar;

    // Membaca operand kedua
    std::cout << "Masukkan operand kedua: ";
    std::cin >> operand2;

    double hasil;

    // Melakukan operasi sesuai dengan operator yang dimasukkan
    switch (operatorChar) {
        case '+':
            hasil = operand1 + operand2;
            break;
        case '-':
            hasil = operand1 - operand2;
            break;
        case '*':
            hasil = operand1 * operand2;
            break;
        case '/':
            // Mengecek apakah pembaginya tidak nol
            if (operand2 != 0) {
                hasil = operand1 / operand2;
            } else {
                std::cout << "Tidak dapat melakukan pembagian oleh nol." << std::endl;
                return 1; // Keluar dari program dengan kode error
            }
            break;
        default:
            std::cout << "Operator tidak valid." << std::endl;
            return 1; // Keluar dari program dengan kode error
    }

    // Menampilkan nilai operand, operator, dan hasil operasi
    std::cout << "Operan pertama: " << operand1 << std::endl;
    std::cout << "Operator: " << operatorChar << std::endl;
    std::cout << "Operan kedua: " << operand2 << std::endl;
    std::cout << "Hasil: " << hasil << std::endl;

    return 0; 
}

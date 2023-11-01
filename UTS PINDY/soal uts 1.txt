#include <iostream>

using namespace std;

string convertPassword(string password) {
    string convertedPassword = "";

    for (int i = 0; i < password.length() && i < 8; i++) {
        char c = password[i];

        // Jika karakter adalah huruf kecil, konversi menjadi dua huruf setelahnya
        if (c >= 'a' && c <= 'z') {
            c += 2;
            if (c > 'z') {
                c -= 26;
            }
        }
        // Jika karakter adalah huruf besar, konversi menjadi dua huruf setelahnya
        else if (c >= 'A' && c <= 'Z') {
            c += 2;
            if (c > 'Z') {
                c -= 26;
            }
        }
        // Jika karakter adalah angka, konversi menjadi dua kali angka tersebut
        else if (c >= '0' && c <= '9') {
            int digit = c - '0';
            int convertedDigit = digit * 2;
            char convertedChar = '0' + convertedDigit;
            convertedPassword += convertedChar;
            continue;
        }
        // Jika karakter bukan huruf atau angka, abaikan
        else {
            continue;
        }

        convertedPassword += c;
    }

    // Jika panjang password kurang dari 8, tambahkan karakter '-' hingga panjang menjadi 8
    while (convertedPassword.length() < 8) {
        convertedPassword += '-';
    }

    return convertedPassword;
}

int main() {
    string password;

    cout << "Masukkan password: ";
    cin >> password;

    string convertedPassword = convertPassword(password);

    cout << "Password yang diinput: " << password << endl;
    cout << "Password yang disimpan: " << convertedPassword << endl;

    return 0;
}
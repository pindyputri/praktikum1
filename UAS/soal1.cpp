
#include <iostream>
#include <cctype>

using namespace std;

string enkripsiPassword(const string& password) {
    string passwordTerenkripsi;
    for (char karakter : password) {
        if (isalpha(karakter)) {
            char karakterTerenkripsi = (karakter - 'a' + 2) % 26 + 'a';
            passwordTerenkripsi += karakterTerenkripsi;
        } else if (isdigit(karakter) && karakter >= '1' && karakter <= '4') {
            char digitTerenkripsi = ((karakter - '1' + 1) * 2) + '0';
            passwordTerenkripsi += digitTerenkripsi;
        }
    }
    return passwordTerenkripsi;
}

bool apakahPasswordValid(const string& password) {
    if (password.length() != 8) {
        return false;
    }

    for (size_t i = 0; i < password.length(); ++i) {
        for (size_t j = i + 1; j < password.length(); ++j) {
            if (password[i] == password[j]) {
                return false;
            }
        }
    }


    for (char karakter : password) {
        if (!isalnum(karakter) || isspace(karakter)) {
            return false;
        }
    }

    return true;
}

int main() {
    string passwordInput;

    
    cout << "Masukkan password Anda (maksimal 8 karakter): ";
    cin >> passwordInput;

    if (apakahPasswordValid(passwordInput)) {
        string passwordTerenkripsi = enkripsiPassword(passwordInput);
        cout << "Password yang Dimasukkan: " << passwordInput << endl;
        cout << "Password Terenkripsi: " << passwordTerenkripsi << endl;
    } else {
        cout << "Password tidak valid. Harap ikuti aturan yang telah ditetapkan." << endl;
    }

    return 0;
}
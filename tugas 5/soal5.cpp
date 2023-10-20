#include <iostream>
using namespace std;

int main() {
    char start_char = 'A';
    char end_char = 'Z';
    int rows = end_char - start_char + 1;

    for(int i = 0; i < rows; i++) {
        for(int j = i; j < rows; j++) {
            cout << static_cast<char>(start_char + j);
        }
        cout << endl;
    }

    return 0;
}

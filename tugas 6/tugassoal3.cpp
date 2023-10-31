#include <iostream>

using namespace std;

void star1(int height) {
    for (int i = height; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void star2(int height) {
  for (int i = height; i >= 1; i--) {
      for (int j = height; j >= i; j--) {
          cout << " ";
      }
      for (int k = 1; k <= i; k++) {
          cout << "*";
      }
      cout << endl;
  }
}

void star3(int height) {
  int center = height / 2;
  int i, j, k;

  for (i = 0; i < center; i++) {
      for (j = center; j >= i; j--) {
          cout << "*";
        }
            for (k = 0; k < 2*i; k++) {
                cout << " ";
            }
            for (j = center; j >= i; j--) {
                cout << "*";
            }
            cout << endl;
        }

        for (i = 0; i <= center; i++) {
            for (j = 0; j <= i; j++) {
                cout << "*";
            }
            for (k = 2*center; k > 2*i; k--) {
                cout << " ";
                }
                      for (j = 0; j <= i; j++) {
                          cout << "*";
                      }
                      cout << endl;
                  }
              }

              int main() {
                  int height;
                  cout << "Masukkan tinggi star: ";
                  cin >> height;

                  cout << "Star 1:" << endl;
                  star1(height);

                  cout << "Star 2:" << endl;
                  star2(height);
                 cout << "Star 3:" << endl;
                    star3(height);

                    return 0;
                }

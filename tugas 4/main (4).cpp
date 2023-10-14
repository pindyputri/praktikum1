#include <iostream>
using namespace std;

struct Time {
    int hour;
    int minute;
    int second;
};

void nextDay(Time &t) {
    t.second++;
    if (t.second >= 60) {
        t.second = 0;
        t.minute++;
        if (t.minute >= 60) {
            t.minute = 0;
            t.hour++;
            if (t.hour >= 24) {
                t.hour = 0;
            }
        }
    }
}

int main() {
    Time currentTime;

    cout << "Masukkan jam (0-23): ";
    cin >> currentTime.hour;
    cout << "Masukkan menit (0-59): ";
    cin >> currentTime.minute;
    cout << "Masukkan detik (0-59): ";
    cin >> currentTime.second;

    nextDay(currentTime);

    cout << "Next time: " << (currentTime.hour < 10 ? "0" : "") << currentTime.hour << ":"
         << (currentTime.minute < 10 ? "0" : "") << currentTime.minute << ":"
         << (currentTime.second < 10 ? "0" : "") << currentTime.second << endl;

    return 0;
}


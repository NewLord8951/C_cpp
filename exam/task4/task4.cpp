#include <iostream>
using namespace std;

class times {
    private:
        int hours;
        int minuts;
        int seconds;
    public:
        times(int hours, int minuts, int seconds) {
            this->hours = hours;
            this->minuts = minuts;
            this->seconds = seconds;
        }
    void addtime() {
        cout << "Введите секунды: " << endl;
        cin >> seconds;
        minuts = 0;
        hours = 0;
        if(seconds > 59) {
            minuts = seconds / 60;
            seconds = seconds % 60;
        }
        if(minuts > 59) {
            hours = minuts / 60;
            minuts = minuts % 60;
        } 
        cout << "Общее количество секнуд: " << seconds + (minuts * 60) + (hours * 3600) << endl;
        cout << hours << ":" << minuts << ":" << seconds << endl;
    }
};

int main() {
    int s;
    int m;
    int h;
    times a(s, m, h);
    a.addtime();
}
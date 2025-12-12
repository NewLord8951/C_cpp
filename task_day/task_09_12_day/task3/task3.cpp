#include <iostream>
using namespace std;

class timer {
    private:
        int hours = 0;
        int minuts = 0;
        int seconds = 0;
    public:
        timer(int h, int m, int s) {
            hours = h;
            minuts = m;
            seconds = s;
        }
    void tick() {
        while(true) {
            int val;
            cout << "Ввдеите (0 чтобы завершить секндомер) (1 чтобы добавить секунды) (2 чтобы удалить таймер): " << endl;
            cin >> val; 
            int *val_y = &val;
            seconds++;
            if(seconds == 59) {
                minuts++;
                seconds = 0;
            }
            if(minuts == 59) {
                hours++;
                minuts = 0;
            }
            int a = addseconds(val_y);
            if(a == 0) {
                break;
            }
        }
    }
    int addseconds(int* val_y) {
        if(*val_y == 1) {
            int sec; 
            cout << "Введите количсесвто секнд которые вы добаите (не более 59):" << endl;
            cin >> sec;
            seconds += sec;
        }
        return(*val_y);
    } 
    void reset() {
        int val;
        int *val_y = &val;
        if(addseconds(val_y) == 2) {
            hours = 0;
            minuts = 0;
            seconds = 0;
        }
    }
    
    void displaytime() {
        cout << hours << ":" << minuts << ":" << seconds << endl;
    }
    void gettotalseconds() {
        int s = hours * 3600 + minuts * 60 + seconds;
        cout << s << endl;
    }
};

int main() {
    timer t(0, 0, 0);
    int val_y = 1;
    t.addseconds(&val_y);
    t.tick();
    t.displaytime();
    t.gettotalseconds();
    t.reset();
    return(0);
}
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Ввдеите координату x и y: " << endl;
    cin >> x >> y;

    if(x > 0 && y > 0) {
        cout << "Первая четверть" << endl;
    }
    else if(x < 0 && y > 0) {
        cout << "Вторая четверть" << endl;
    }
    else if(x < 0 && y < 0) {
        cout << "Третья четверть" << endl;
    }
    else if(x > 0 && y < 0) {
        cout << "Четвёртая четверть" << endl;
    }
    else {
        cout << "Нету четвверти" << endl;
    }
    return(0);
}
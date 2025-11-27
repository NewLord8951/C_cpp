#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cout << "Ввдеите координаты x1 и y1 и x2 и y2: " << endl;
    cin >> x1 >> y1 >> x2 >> y2;

    if(x1 > 0 && x2 > 0 && y1 > 0 && y2 > 0) {
        cout << "Да" << endl;
    }
    else if(x1 < 0 && x2 < 0 && y1 > 0 && y2 > 0) {
        cout << "Да" << endl;
    }
    else if(x1 > 0 && x2 > 0 && y1 < 0 && y2 < 0) {
        cout << "Да" << endl;
    }
    else if(x1 < 0 && x2 < 0 && y1 < 0 && y2 < 0) {
        cout << "Да" << endl;
    }
    else {
        cout << "Нет" << endl;
    }
    return(0);
}

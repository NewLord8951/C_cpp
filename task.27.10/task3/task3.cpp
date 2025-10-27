#include <iostream>
#include <exception>
using namespace std;

int main() {
    try{
        int n;
        cout << "Ввдеите сумму билета для 1 ребёнка и 3 взрослых: " << endl;
        cin >> n;

        int s;
        cout << "Ввдеите стоимость билета для 1 взрослого: " << endl;
        cin >> s;

        int r = n - (s * 3);  // ребёнка
        cout << "Стоимость билета для ребёнка: " << r << endl;
    }
    catch(exception e) {
    cout << "Ошибка" << endl;
    }

    return(0);
}

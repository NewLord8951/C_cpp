#include <iostream>
#include <exception>
using namespace std;

int main() {
    try{
        int v;
        cout << "Ввдеите количество людей которые вошли: " << endl;
        cin >> v;

        int l;
        cout << "Ввдеите количество людей которые вышли: " << endl;
        cin >> l;

        int b;
        cout << "Ввдеите количество людей которые были: " << endl;
        cin >> b;

        int sum = b + v - l;
        cout << "Людей стало в автобусе: " << sum << endl;
    }
    catch(exception e) {
    cout << "Ошибка" << endl;
    }

    return(0);
}

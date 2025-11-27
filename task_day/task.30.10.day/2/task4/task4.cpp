#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Ввдеите возраст: " << endl;
    cin >> age;

    if(age < 7) {
        cout << "Малыш" << endl;
    }
    else if(age > 6 && age < 18) {
        cout << "Школьник" << endl;
    }
    else if(age > 17 && age < 65) {
        cout << "Взрослый" << endl;
    }
    else if(age > 64 && age < 120) {
        cout << "Аксакал" << endl;
    }
    else {
        cout << "Приведение" << endl;
    }
    return(0);
}
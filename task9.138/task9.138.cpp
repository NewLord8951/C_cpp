#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cout << "Введите цифру: " << endl;
    cin >> num;

    try {
        int int_num = stoi(num);
        cout << "Да является числом" << endl;
    } catch(const invalid_argument& e) {
        cerr << "Нет не является числом" << endl;
    }

    return(0);
}
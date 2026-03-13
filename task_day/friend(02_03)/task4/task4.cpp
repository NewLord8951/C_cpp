#include <iostream>
#include <string>
#include <vector>
using namespace std;

class bankaccount {
    protected:
        vector<string> number;
        vector<double> balance;
        vector<int> pin;
    public:
        bankaccount() {};
        bankaccount(vector<string> number, vector<double> balance, vector<int> pin) {
            this->number = number;
            this->balance = balance;
            this->pin = pin;
        }
    void neznau() {
        int jem;
        cout << "Введите колличество номеров: " << endl;
        cin >> jem;
        string peremennaya;
        for(int i = 0; i < jem; i++) {
            cout << "Ввдеите номера: " << endl;
            cin >> peremennaya;
            number.push_back(peremennaya);
        }
    }
    void prinimalka() {
        int vrot;
        for(int i = 0; i < number.size(); i++) {
            cout << "Введите пин-коды для " << number[i] << endl;
            cin >> vrot;
            pin.push_back(vrot);
        }
    }
    int pin0() {
        int pin__;
        int igor;
        cout << "Введите один из номеров: " << endl;
        for(int i = 0; i < number.size(); i++) {
            cout << number[i] << " " << i << endl;
        }
        cout << endl;
        cin >> igor;
        cout << "Введите пин-код" << endl;
        cin >> pin__;
        if(pin__ == pin[igor]) {
            cout << "Вход выполнен" << endl;
        }
        else {
            cout << "Не верный пин-код" << endl;
        }
        return(pin__);
    }
    void balans() {
        for(int i = 0; i < number.size(); i++) {
            balance.push_back(0);
        }
        int igorq;
        cout << "Введите один из номеров: " << endl;
        for(int i = 0; i < number.size(); i++) {
            cout << number[i] << " " << i << endl;
        }
        cout << endl;
        cin >> igorq;
        double stepan;
        cout << "Введите число которое хотите добавить: " << endl;
        cin >> stepan;
        balance[igorq] = stepan;
    }
};

class bankmanager : private bankaccount {
    public:
        friend class bankaccount;
        bankmanager() {};
        bankmanager(vector<int> pin, vector<double> balance, vector<string> number) {
            this->pin = pin;
            this->balance = balance;
            this->number = number;
        }
    void transfermoney() {
        int igortwo;
        cout << "Введите один из номеров кто будет переводить: " << endl;
        for(int i = 0; i < number.size(); i++) {
            cout << number[i] << " " << i << endl;
        }
        cout << endl;
        cin >> igortwo;
        double igorthree;
        cout << "Введите сколько хотите перевести: " << endl;
        cin >> igorthree;
        int igo;
        cout << "Введите один из номеров кому будете переводить: " << endl;
        for(int i = 0; i < number.size(); i++) {
            cout << number[i] << " " << i << endl;
        }
        cout << endl;
        cin >> igo;
        balance[igo] += igorthree;
        balance[igortwo] -= igorthree;
    }
    void changepin() {
        int itwo;
        cout << "Введите один из номеров кто будет переводить: " << endl;
        for(int i = 0; i < number.size(); i++) {
            cout << number[i] << " " << i << endl;
        }
        cout << endl;
        cin >> itwo;
        int faer;
        cout << "Введите старый пин-код: " << endl;
        cin >> faer;
        if(faer == pin[itwo]) {
            cout << "Введите новый пин-код: " << endl;
            cin >> pin[itwo];
        }
    }
};

int main() {
    vector<string> number;
    vector<double> balance;
    vector<int> pin;
    bankaccount fynal(number, balance, pin);
    bankmanager k(number, balance, pin);
    int f;
    while(true) {
        cout << "Введите: 0(Выйти), 1(Ввод данных), 2(Выполнить вход), 3(Добавить денег), 4(Перевести другому клиенту), 5(Смена пин-кода)" << endl;
        cin >> f;
        if(f == 1) {
            fynal.neznau();
            fynal.prinimalka();
        }
        else if(f == 2) {
            fynal.pin0();
        }
        else if(f == 3) {
            fynal.balans();
        }
        else if(f == 4) {
            k.transfermoney();
        }
        else if(f == 5) {
            k.changepin();
        }
        else if(f == 0) {
            break;
        }
    }
    return 0;
}
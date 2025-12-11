#include <iostream>
using namespace std;

class Wallet {
    private:
        int rubles;
        int dollars;
        int euros;
    public:
        Wallet(int rub, int usd, int eur) {
            rubles = rub;
            dollars = usd;
            euros = eur;
        }
    void addmoney() {
        int val;
        cout << "Введите валюту (1 рубль, 2 доллар, 3 евро)" << endl;
        cin >> val;
        int sum;
        cout << "Введите сумму которую добавите: " << endl;
        cin >> sum;
        if(val == 1) {
            rubles = rubles + sum;
        }
        else if(val == 2) {
            dollars = dollars + sum;
        }
        else if(val == 3) {
            euros = euros + sum;
        }
        else {
            cout << "От 1 до 3!" << endl;
        }
    }
    void spendmoney() {
        int summ;
        cout << "Введите сумму которую потратите (в рублях): " << endl;
        cin >> summ;
        if(summ <= rubles) {
            rubles = rubles - summ;
        }
        else {
            cout << "У вас не хватает денег(" << endl;
        }
    }
    double converttorubles() {
        double rubrate = double(rubles);
        double usdrate = double(dollars);
        double eurrate = double(euros);
        rubrate = rubrate + (usdrate * 78.25) + (euros * 91.45);
        return(rubrate);
    }
    double displaybalance() {
        int r = int(rubles);
        return(r);
    }
};

int main() {
    Wallet r(0, 0, 0);
    int de;
    
    while(true) {
        cout << "Выберете что хотите сдлеать (1 положить, 2 потратить, 3 закончить): " << endl;
        cin >> de;
        if(de == 1) {
            r.addmoney();
            r.converttorubles();
        }
        else if(de == 2) {
           r.spendmoney(); 
        }
        else if(de == 3) {
            break;
        }
        else {
            cout << "Либо 1, либо 2" << endl;
        }
    }
    
    cout << "Рублей на балансе: " << r.displaybalance() << endl;
    return(0);
}
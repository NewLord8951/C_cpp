#include <iostream>
#include <string>
using namespace std;

class predator {
    private:
        string title;
        string author;
        int year;
        double price;
        bool isavaolable;
    public:
        predator(string t, string a, int y, double p, bool i) {
            title = t;
            author = a;
            year = y;
            price = p;
            isavaolable = i;
        }
    bool borrowbook() {
        int ready;
        cout << "Введите книга к выдачи: 1(доступно), 0(недоступно)" << endl;
        cin >> ready;
        if(ready == 1) {
            isavaolable = true;
        }
        else if(ready == 0) {
            isavaolable = false;
        }
        return(isavaolable);
    }
    bool returnbook() {
        isavaolable = true;
        return(isavaolable);
    }
    double applydiscount(double perecent) {
        cout << "Введите скидку в процентах: " << endl;
        cin >> perecent;
        price = (price / 100) + (100 - perecent);
        return(perecent); 
    }
    void displayinfo() {
        cout << "Название: " << title << endl;
        cout << "Автор: " << author << endl;
        cout << "Год издания: " << year << endl;
        cout << "Цена: " << price << endl;
        if(isavaolable == true) {
            cout << "Книга дотсупна к выдачи: " << endl;
        }
        else{
             cout << "Книга не дотсупна к выдачи: " << endl;
        }
    } 
    bool isoldbook() {
        bool age;
        if(year - 50 < 1975) {
            age = true;
            cout << "Да" <<  endl;
        }
        else {
            age = false;
            cout << "Нет" <<  endl;
        }
        return(age);
    }
};

int main() {
    string title_m;
        cout << "Введите название книги: " << endl;
        cin >> title_m;
        string author_m;
        cout << "Введите автора книги: " << endl;
        cin >> author_m;
        int year_m;
        cout << "Введите год издания: " << endl;
        cin >> year_m;
        double price_m;
        cout << "Введите цену книги: " << endl;
        cin >> price_m;
        bool isavaolable_m;
        cout << "Введите доступна ли книга к продаже: 1(доступно), 0(недоступно) " << endl;
        cin >> isavaolable_m;
        predator a(title_m, author_m, year_m, price_m, isavaolable_m);
    while(true) {
        int del;
        cout << "Введите 0(закончить), 1(выдать книгу), 2(вернуть книгу), 3(применить скидку к книге), 4(вывести информацию о книге), 5(проверить старше ли книга 50 лет)" << endl;
        cin >> del;
        if(del == 0) {
            break;
        }
        else if(del == 1) {
            a.borrowbook();
        }
        else if(del == 2) {
            a.returnbook();
        }
        else if(del == 3) {
            a.applydiscount(price_m);
        }
        else if(del == 4) {
            a.displayinfo();
        }
        else if(del == 5) {
            a.isoldbook();
        }
    }
    return(0);
}
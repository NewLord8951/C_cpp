#include <iostream>
#include <string>
#include <map>
using namespace std;

class vozrast {
    protected:
        int age;
    public:
        vozrast() {};
        vozrast(int age) {
            this->age = age;
        }
};

class stud : vozrast{
    private:
        string name;
        string vuz;
        int num;
    public:
        stud(){};
        stud(string name, string vuz, int num, int age) {
            this->name = name;
            this->vuz = vuz;
            this->num = num;
            this->age = age;
        }
        void enter() {
            cout << "Введите данные: " << endl;
            cout << "ФИО: " << endl;
            cin >> name;
            cout << "ВУЗ: " << endl;
            cin >> vuz;
            cout << "Введите номер группы: " << endl;
            cin >> num;
            cout << "Введите возраст: " << endl;
            cin >> age;
        }
        void show() {
            if(age < 18) {
                cout << "ЕМУ НЕТ 18!!!  " << name << endl;
            }
        }
};




int main() {
    int aaa = 20;
    int bbb = 22;
    cout << "Задание 1" << endl;
    auto aa{[aaa, bbb](){return aaa + bbb;}};
    cout << aa() << endl;

    cout << "Задание 2: " << endl;
    int del;
    cout << "Введите колличесвто номер: " << endl;
    cin >> del;
    int j = 0;
    while(j < del) {
        string na;
        cout << "Введите имя: " << endl;
        cin >> na;
        string nu;
        cout << "Введите номер: " << endl;
        cin >> nu;
        map<string, string> ccc;
        ccc["name"] = na, nu;
        string w;
        cout << "Введите кого хотити найти: " <<  endl;
        cin >> w;
        ccc.erase("w");
    }

    

    cout << "Задание 3: " << endl;
    int fina;
    cout << "Введите сколько будет студентов: " << endl;
    cin >> fina;
    string name;
    string vuz;
    int num;
    int age;
    stud a(name, vuz, num, age);
    int i = 0;
    while(i < fina) {
        i++;
        
        a.enter();
        a.show();
    }
    return 0;
}
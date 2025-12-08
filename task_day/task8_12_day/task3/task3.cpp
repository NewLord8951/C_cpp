#include <iostream>
#include <string>
using namespace std;

struct student {
    string lastname;
    int grades[5];
    double averagegrade;
};

double calculateaverage(student& s) {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += s.grades[i];
    }
    return sum / 5;
}

int main() {
    student mas[3];
    for(int i = 0; i < 3; i++) {
        string surname;
        int marks[5];
        cout << "Введите имена: " << endl;
        cin >> surname;
        for(int j = 0; j < 5; j++) {
            cout << "Введите оценки: " << endl;
            cin >> marks[5];
         }
        mas[i] = {surname, marks[5]};
    }
    for (int i = 0; i < 3; i++) {
    double znach = calculateaverage(mas[i]);
    mas[i].averagegrade = znach;
    }
    string fio = mas[0].lastname;
    double ave = mas[0].averagegrade;
    for(int i = 0; i < 2; i++) {
        if(mas[i].averagegrade > mas[i + 1].averagegrade) {
            fio = mas[i + 1].lastname;
            ave = mas[i + 1].averagegrade;
        }
    }
    cout << fio << endl;
    return 0;
}
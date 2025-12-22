#include <iostream>
#include <string>
using namespace std;

class student {
    private:
        string name;
        int age;
    public:
        student(string name, int age) {
            this -> name = name;
            this -> age = age;
        }
    void a() {
        cout << "Имя: " << name << endl;
        cout << "Возраст: " << age << endl;
    }
};

int main() {
    string name;
    cout << "Введите имя: " << endl;
    cin >> name;
    int age;
    cout << "Введиет возраст: " << endl;
    cin >> age;
    student a(name, age);
    a.a();
    return(0);
}
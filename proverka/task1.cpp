#include <iostream>
#include <string>
using namespace std;

struct a {
    int c;
    string d;
    void e() {
        d = "Ого";
    }
    void f() {
        cout << d << endl;
    }
};

class Person {
    private:
        string name;
        int age;
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }
    int proverka() {
        this->age = 1;
        return(age);
    }
    void vyvod() {
        cout << age << endl;
    }
};

int main() {
    int a;
    Person b("a", a);
    b.vyvod();
    return 0;
}
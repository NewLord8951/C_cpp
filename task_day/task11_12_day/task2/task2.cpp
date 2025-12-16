#include <iostream>
#include <string>
using namespace std;

class employee {
    protected:
        string name;
        int basesalary;
    public:
        employee() {};
        employee(string name, int basesalary) {
            name = name;
            basesalary = basesalary;
        }
    int a() {
        return(name, basesalary);
    }
};

class manager : public employee {
    protected:
        int bonus;
    public:
        manager() {};
        manager(int bonus) {
            bonus = bonus;
            int finalsalary = bonus + basesalary;
        }
    int b() {
        return(bonus);
    }
};

class develop : public employee {
    protected:
        int overtimepay;
    public:
        develop() {};
        develop(int overtimepay) {
            overtimepay = overtimepay;
            int finalsalary = basesalary + overtimepay;
        }
    int c() {
        return(overtimepay);
    }
};

int main() {
    employee a("a", 120000);
    manager b(20000);
    develop c(50000);
    cout << a.a() << endl;
    cout << b.b() << endl;
    cout << c.c() << endl;
    return(0);
}
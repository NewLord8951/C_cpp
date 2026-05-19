#include <iostream>
#include <string>
using namespace std;

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
};

int main() {
    int a;
    Person b("a", a);
    return 0;
}
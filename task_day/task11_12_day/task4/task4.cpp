#include <iostream>
#include <string>
using namespace std;

class animal {
    protected:
        string name;
        int weight;
    public: 
        animal() {};
        animal(string name, int weight) {
            this -> name = name;
            this -> weight = weight;
        }
    void showinfo0() {
        cout << "Имя животного: " << name << endl;
        cout << "Вес животного: " << weight << endl;
    }
};

class predator : public animal {
    protected:
        int huntinghours;
    public:
        predator() {};
        predator(string name, int weight, int huntinghours)
        : animal(name, weight), huntinghours(huntinghours) {}
    void showinfo1() {
        cout << "Часов охоты: " << huntinghours << endl;
    }
};

class herbivore : public predator {
    private:
        string favoriteplant;
    public:
        herbivore(string name, int weight, int pagecount, string favoriteplant)
        : predator(name, weight, pagecount), favoriteplant(favoriteplant) {}
    void showinfo2() {
        cout << "Любимое растение: " << favoriteplant << endl;
    }
};

int main() {
    string name;
    cout << "Введите имя животного: " << endl;
    cin >> name;
    int weight;
    cout << "Введите вес животного: " << endl;
    cin >> weight;
    int i;
    cout << "Ввдеите 1 если животнок хищник, 2 если животное травоядное, 3 если животное всеядное: " << endl;
    cin >> i;
    int pagecount;
    string favoriteplant;
    if(i == 1) {
        cout << "Ввдеите часы охоты: " << endl;
        cin >> pagecount;
    }
    else if(i == 2) {
        cout << "Ввдеите любимое растение: " << endl;
        cin >> favoriteplant;
    }
    else if(i == 3) {
        int pagecount;
        cout << "Ввдеите часы охоты: " << endl;
        cin >> pagecount;
        string favoriteplant;
        cout << "Ввдеите любимое растение: " << endl;
        cin >> favoriteplant;
    }
    else {
        cout << "От 1 до 3" << endl;
    }
    herbivore a(name, weight, pagecount, favoriteplant);
    a.showinfo0();
    a.showinfo1();
    a.showinfo2();
    return(0);
}
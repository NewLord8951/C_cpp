#include <iostream>
#include <queue>
#include <string>
using namespace std;

struct j {
    int id;
    string user;
    int pages;
};

ostream& operator<<(ostream& os, const j& job) {
    os << "ID: " << job.id 
       << ", User: " << job.user 
       << ", Pages: " << job.pages;
    return os;
}

int main() {
    queue<j> b;
    int d;
    queue<j> f;
    while(true) {
        cout << "Ввдеите 1(добавить), 2(Вывести всё), 0(Выйти)" << endl;
        cin >> d;
        if(d == 1) {
            for(int i = 0; i < 5; ++i) {
                f = b;
                int a = i;
                string c;
                cout << "Ввдеите кто написал: " << endl;
                cin >> c;
                int e;
                cout << "Ввдеите колличество страниц" << endl;
                cin >> e;
                b.push({a, c, e});
            }
        }
        else if(d == 2) {
            while(!f.empty()) {
                cout << f.front() << " " << endl;
                f.pop();
            }
        }
        else if(d == 0) {
            break;
        }
    }
    return 0;
}

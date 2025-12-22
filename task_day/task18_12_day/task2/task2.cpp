#include <iostream>
#include <string>
using namespace std;

class book {
    private:
        int pages;
    public:
        book(int pages) {
            this -> pages = pages;
        }
    void hasmorepagesthan() {
        int a;
        cout << "Введите минимальное количество страниц: " << endl;
        cin >> a;
        bool b;
        if(a < pages) {
            b = true;
            cout << b << endl;
        }
    }
};

int main() {
    int pages;
    cout << "Введите количество страниц в книги: " << endl;
    cin >> pages;
    book a(pages);
    a.hasmorepagesthan();
    return(0);
}
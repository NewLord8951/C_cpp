#include <iostream>
#include <string>
using namespace std;

class libraryitem {
    protected:
        int id;
        string title;
        int year;
    public: 
        libraryitem() {};
        libraryitem(int id, string title, int year) {
            this -> id = id;
            this -> title = title;
            this -> year = year;
        }
    void printdescription() {
        cout << "id книги: " << id << endl;
        cout << "Название книги: " << title << endl;
        cout << "Год издания книги: " << year << endl;
    }
};

class book : public libraryitem {
    protected:
        string author;
        int pagecount;
    public:
        book() {};
        book(int id, string title, int year, string author, int pagecount)
        : libraryitem(id, title, year), author(author), pagecount(pagecount) {}
    void printdescription1() {
        cout << "Автор" << author << endl;
        cout << "Страниц" << pagecount << endl;
    }
};

class scientificbook : public book {
    private:
        string field;
    public:
        scientificbook(int id, string title, int year, string author, int pagecount, string field)
        : book(id, title, year, author, pagecount), field(field) {}
    void a() {
        cout << "Область науки: " << field << endl;
    }
};

int main() {
    int i;
    cout << "Введите id книги: " << endl;
    cin >> i;
    string t;
    cout << "Введите название книги: " << endl;
    cin >> t;
    int y;
    cout << "Введите год издания книги: " << endl;
    cin >> y;
    string a;
    cout << "Введите автора книги: " << endl;
    cin >> a;
    int p;
    cout << "Введите количество страниц книги книги: " << endl;
    cin >> p;
    string f;
    cout << "Введите область науки в книги: " << endl;
    cin >> f;
    scientificbook aa(i, t, y, a, p, f);
    aa.printdescription();
    aa.printdescription1();
    aa.a();
    return(0);
}
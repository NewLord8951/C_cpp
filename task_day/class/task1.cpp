#include <iostream>
#include <string>
using namespace std;

class libraryitem {
    protected:
        string title;
        int year;
        int itemid;
    public:
        libraryitem() {};
        libraryitem(string title, int year, int itemid) {
            this->title = title;
            this->year = year;
            this->itemid = itemid; 
        }
    void displayinfo() {
        cout << " " << endl;
        cout << "ID: " << itemid << endl;
        cout << "Название: " << title << endl; 
        cout << "Год издания: " << year << endl;
        
    }
};

class book : public libraryitem{
    private:
        string author;
        int pages;
        string genre;
    public:
        book() {};
        book(string author, int pages, string genre, string title, int year, int itemid) {
            this->title = title;
            this->year = year;
            this->itemid = itemid;
            this->author = author;
            this->pages = pages;
            this->genre = genre;
        }
    void displayinfo() {
        cout << "Автор: " << author << endl;
        cout << "Страниц: " << pages << endl;
        cout << "Жанр: " << genre << endl;
    }
};

class magazine : public libraryitem{
    private:
        string issuenumber;
        string month;
    public:
        magazine() {};
        magazine(string issuenumber, string month, string title, int year, int itemid) {
            this->title = title;
            this->year = year;
            this->itemid = itemid;
            this->issuenumber = issuenumber;
            this->month = month;
        }
    void displayinfo() {
        cout << "Какой-то номер: " << issuenumber << endl;
        cout << "Месяц: " << month << endl;
    }
};

int main() {
    string title;
    cout << "Название" << endl;
    cin >> title;
    int year;
    cout << "Дата издания" << endl;
    cin >> year;
    int itemid;
    cout << "Id" << endl;
    cin >> itemid;
    string author;
    cout << "Автор" << endl;
    cin >> author;
    int pages;
    cout << "Количество страниц" << endl;
    cin >> pages;
    string genre;
    cout << "Жанр" << endl;
    cin >> genre;
    string issuenumber;
    cout << "Хз что это" << endl;
    cin >> issuenumber;
    string month;
    cout << "Месяц" << endl;
    cin >> month;
    libraryitem a(title, year, itemid);
    book b(author, pages, genre, title, year, itemid);
    magazine c(issuenumber, month, title, year, itemid);
    a.displayinfo();
    b.displayinfo();
    c.displayinfo();
    return(0);
}
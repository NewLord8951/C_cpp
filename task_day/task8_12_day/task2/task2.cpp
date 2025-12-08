#include <iostream>
#include <string>
using namespace std;

struct book {
    string title;
    string author;
    int year;
    int pages;
};

void printbookinfo(book books[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Книга " << i + 1 << ":\n";
        cout << "  Название: " << books[i].title << "\n";
        cout << "  Автор: " << books[i].author << "\n";
        cout << "  Год издания: " << books[i].year << "\n";
        cout << "  Страниц: " << books[i].pages << "\n\n";
    }
}

int main() {
    book books[5] = {
        {"Преступление и наказание", "Ф. М. Достоевский", 1866, 670},
        {"Анна Каренина", "Л. Н. Толстой", 1877, 864},
        {"Маленький принц", "Антуан де Сент-Экзюпери", 1943, 96},
        {"Гарри Поттер и Философский камень", "Дж. К. Роулинг", 1997, 332},
        {"1984", "Джордж Оруэлл", 1949, 328}
    };

    printbookinfo(books, 5);

    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

const string FILENAME = "contacts.txt";

// Вспомогательная функция для разделения строки "Name: +7910..."
pair<string, string> parseContact(const string& line) {
    size_t pos = line.find(": ");
    if (pos == string::npos) return {"", ""};
    return {line.substr(0, pos), line.substr(pos + 2)};
}

void addContact() {
    ofstream data(FILENAME, ios::app);  // ios::app - добавляем в конец файла
    if (!data.is_open()) {
        cout << "Ошибка открытия файла для записи!" << endl;
        return;
    }
    
    int count;
    cout << "Введите количество контактов для добавления: ";
    cin >> count;
    cin.ignore();  // Очистить буфер после cin
    
    for(int i = 0; i < count; i++) {
        string name, number;
        
        cout << "Введите имя (" << i+1 << "): ";
        getline(cin, name);
        
        cout << "Введите номер: ";
        getline(cin, number);
        
        // Записываем в формате "Имя: номер"
        data << name << ": " << number << endl;
        cout << "Контакт добавлен!" << endl << endl;
    }
    data.close();
}

void showAllContacts() {
    ifstream file(FILENAME);
    if (!file.is_open()) {
        cout << "Файл не найден или пуст!" << endl;
        return;
    }
    
    string line;
    int count = 0;
    cout << "\n=== Все контакты ===" << endl;
    
    while(getline(file, line)) {
        if (!line.empty()) {
            cout << ++count << ". " << line << endl;
        }
    }
    
    if (count == 0) {
        cout << "Список контактов пуст." << endl;
    }
    file.close();
}

void findContact() {
    string searchName;
    cout << "Введите имя для поиска: ";
    cin.ignore();
    getline(cin, searchName);
    
    ifstream file(FILENAME);
    if (!file.is_open()) {
        cout << "Ошибка открытия файла!" << endl;
        return;
    }
    
    string line;
    bool found = false;
    cout << "\n=== Результаты поиска ===" << endl;
    
    while(getline(file, line)) {
        auto [name, number] = parseContact(line);
        // Поиск с учётом регистра (можно улучшить)
        if (name.find(searchName) != string::npos) {
            cout << "✓ " << line << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "Контакты с именем \"" << searchName << "\" не найдены." << endl;
    }
    file.close();
}

void deleteContact() {
    string deleteName;
    cout << "Введите имя контакта для удаления: ";
    cin.ignore();
    getline(cin, deleteName);
    
    // 1. Читаем все контакты в память
    vector<string> contacts;
    ifstream inFile(FILENAME);
    string line;
    
    while(getline(inFile, line)) {
        if (!line.empty()) {
            auto [name, number] = parseContact(line);
            // Сохраняем только если имя НЕ совпадает
            if (name.find(deleteName) == string::npos) {
                contacts.push_back(line);
            }
        }
    }
    inFile.close();
    
    // 2. Перезаписываем файл
    ofstream outFile(FILENAME);
    for(const auto& contact : contacts) {
        outFile << contact << endl;
    }
    outFile.close();
    
    cout << "Поиск завершён. Контакт(ы) удалены (если найдены)." << endl;
}

void showMenu() {
    cout << "\n=== Меню ===" << endl;
    cout << "1. Добавить контакт(ы)" << endl;
    cout << "2. Показать все контакты" << endl;
    cout << "3. Найти контакт" << endl;
    cout << "4. Удалить контакт" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите действие: ";
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");  // Для корректного отображения кириллицы
    
    int choice;
    do {
        showMenu();
        cin >> choice;
        
        switch(choice) {
            case 1:
                addContact();
                break;
            case 2:
                showAllContacts();
                break;
            case 3:
                findContact();
                break;
            case 4:
                deleteContact();
                break;
            case 0:
                cout << "До свидания!" << endl;
                break;
            default:
                cout << "Неверный выбор! Попробуйте снова." << endl;
        }
    } while(choice != 0);
    
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class studentgroup {
    private:
        string groupname = "";
        vector<string> students;
        int studentcount;
        const int maxsize = 25;
    public:
        studentgroup(string g, vector<string> s, int sc) {
            groupname = g;
            students = s;
            studentcount = sc;
        }
    void addstudent() {
        while(true) {
            if(students.size() <= maxsize) {
                string student;
                cout << "Введите имя студена и в конце напишите 0: " << endl;
                cin >> student;
                if(student == "0") {
                    break;
                }
                students.push_back(student);
            }
        }
    }
    void removestudent() {
        int siz = students.size();
        while(true) {
            string del;
            cout << "Введите имя которого хотите удалить и в конце напишите 0: " << endl;
            cin >> del;
            for(int i = 0; i < siz; i++) {
                if(students[i] == del) {
                    students[i] = "";
                    students.pop_back();
                }
            }
            if(del == "0") {
                break;
            }
        }
    }
    void findstudent() {
        string index;
        int siz = students.size();
        int a;
        cout << "Введите имя сдутента: " << endl;
        cin >> index;
        for(int i = 0; i < siz; i++) {
            if(students[i] == index) {
                i = a;
            }
        }
    }
    void sortstudents() {
        sort(students.begin(), students.end());
    }
    void displaygroup() {
        int siz = students.size();
        for(int i = 0; i < siz; i++) {
            cout << students[i] << endl;
        }
    }
    void getaveragenamelength() {
        int potsch;
        int siz = students.size();
        for(int i = 0; i < siz; i++) {
            potsch += (students[i].length()) / 2;
        }
        cout << potsch;
    }
};

int main() {
    string groupname = "";
    vector<string> students;
    int studentcount = 0;
    studentgroup a(groupname, students, studentcount);
    while(true) {
        int del;
        cout << "Введите 0(закончить), 1(добавиьт студента), 2(удалить студента), 3(нати студента), 4(отсортировать студентов), 5(вывести список студентов), 6(срдняя длина имени)" << endl;
        cin >> del;
        if(del == 0) {
            break;
        }
        else if(del == 1) {
            a.addstudent();
        }
        else if(del == 2) {
            a.removestudent();
        }
        else if(del == 3) {
            a.findstudent();
        }
        else if(del == 4) {
            a.sortstudents();
        }
        else if(del == 5) {
            a.displaygroup();
        }
        else if(del == 6) {
            a.getaveragenamelength();
        }
    }
    return 0;
}
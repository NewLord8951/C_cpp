#include <iostream>
#include <vector>
#include <string>
using namespace std;

class person {
    protected:
        int num_student;
        int num_prepod;
        int num_myp;
    public:
        person() : num_student(0), num_prepod(0), num_myp(0) {};
        person(int num_student, int num_prepod, int num_myp) {
            this->num_student = num_student;
            this->num_prepod = num_prepod;
            this->num_myp = num_myp;
        }
    void numnum() {
        cout << "Введите номер студента (с 0)" << endl;
        cin >> num_student;
        cout << "Введите номер преподавателя (с 0)" << endl;
        cin >> num_prepod;
        cout << "Введите номер МУПа (с 0)" << endl;
        cin >> num_myp; 
    } 
    void print() const {
        cout << "--- Person ---" << endl;
        cout << "Номер студента: " << num_student << endl;
        cout << "Номер преподавателя: " << num_prepod << endl;
        cout << "Номер МУПа: " << num_myp << endl;
    }
};

class date {
    protected:
        vector <int> day_student;
        vector <int> month_student;
        vector <int> year_student;
        vector <int> day_prepod;
        vector <int> month_prepod;
        vector <int> year_prepod;
        vector <int> day_myp;
        vector <int> month_myp;
        vector <int> year_myp;
    public:
        date() {};
        date(vector <int> day_student, vector <int> month_student, vector <int> year_student,
                vector <int> day_prepod, vector <int> month_prepod, vector <int> year_prepod,
                vector <int> day_myp, vector <int> month_myp, vector <int> year_myp) {
            this->day_student = day_student;
            this->month_student = month_student;
            this->year_student = year_student;
            this->day_prepod = day_prepod;
            this->month_prepod = month_prepod;
            this->year_prepod = year_prepod;
            this->day_myp = day_myp;
            this->month_myp = month_myp;
            this->year_myp = year_myp;
        }
    void print() const {
        cout << "--- Date ---" << endl;
        cout << "Дни рождения студентов: ";
        for (int d : day_student) cout << d << " "; cout << endl;
        cout << "Месяцы рождения студентов: ";
        for (int m : month_student) cout << m << " "; cout << endl;
        cout << "Годы рождения студентов: ";
        for (int y : year_student) cout << y << " "; cout << endl;

        cout << "Дни рождения преподавателей: ";
        for (int d : day_prepod) cout << d << " "; cout << endl;
        cout << "Месяцы рождения преподавателей: ";
        for (int m : month_prepod) cout << m << " "; cout << endl;
        cout << "Годы рождения преподавателей: ";
        for (int y : year_prepod) cout << y << " "; cout << endl;

        cout << "Дни рождения МУП: ";
        for (int d : day_myp) cout << d << " "; cout << endl;
        cout << "Месяцы рождения МУП: ";
        for (int m : month_myp) cout << m << " "; cout << endl;
        cout << "Годы рождения МУП: ";
        for (int y : year_myp) cout << y << " "; cout << endl;
    }
};

class student : public person, public date {
    protected:
        vector <string> student_name;
        vector <string> student_lastname;
    public:
        student() {};
        student(int num_student, vector <string> student_name, vector <string> student_lastname,
                vector <int> day_student, vector <int> month_student, vector <int> year_student) {
            this->num_student = num_student;
            this->student_name = student_name;
            this->student_lastname = student_lastname;
            this->day_student = day_student;
            this->month_student = month_student;
            this->year_student = year_student;
        } 
    void students() {
        int del;
        cout << "Введите количество студентов" << endl;
        cin >> del;
        for(int i = 0; i < del; i++) {
            string name;
            cout << "Введите имя студента" << endl;
            cin >> name;
            student_name.push_back(name);
            string lastname;
            cout << "Введите фамилию студента" << endl;
            cin >> lastname;
            student_lastname.push_back(lastname);
            int day_b;
            cout << "Введите день рождения студента (только день): " << endl;
            cin >> day_b;
            day_student.push_back(day_b);
            int month_b;
            cout << "Введите месяц рождения студента (только месяц): " << endl;
            cin >> month_b;
            month_student.push_back(month_b);
            int year_b;
            cout << "Введите год рождения студента (только год): " << endl;
            cin >> year_b;
            year_student.push_back(year_b);
        }
    }
    void print() const {
        cout << "\n--- Student ---" << endl;
        cout << "Имена студентов: ";
        for (const string& n : student_name) cout << n << " "; cout << endl;
        cout << "Фамилии студентов: ";
        for (const string& ln : student_lastname) cout << ln << " "; cout << endl;
        person::print();
        date::print();
    }
};

class prepod : public person, public date {
    protected:
        vector<string> prepod_name;
        vector<string> prepod_lastname;
    public:
        prepod() {};
        prepod(int num_prepod, vector<string> prepod_name, vector<string> prepod_lastname, 
               vector<int> day_prepod, vector<int> month_prepod, vector<int> year_prepod) {
            this->num_prepod = num_prepod;
            this->prepod_name = prepod_name;
            this->prepod_lastname = prepod_lastname;
            this->day_prepod = day_prepod;
            this->month_prepod = month_prepod;
            this->year_prepod = year_prepod;
        } 
    void prepods() {
        int del;
        cout << "Введите количество преподавателей" << endl;
        cin >> del;
        for(int i = 0; i < del; i++) {
            string name;
            cout << "Введите имя преподавателя" << endl;
            cin >> name;
            prepod_name.push_back(name);
            string lastname;
            cout << "Введите фамилию преподавателя" << endl;
            cin >> lastname;
            prepod_lastname.push_back(lastname);
            int day_b;
            cout << "Введите день рождения преподавателя (только день): " << endl;
            cin >> day_b;
            day_prepod.push_back(day_b);
            int month_b;
            cout << "Введите месяц рождения преподавателя (только месяц): " << endl;
            cin >> month_b;
            month_prepod.push_back(month_b);
            int year_b;
            cout << "Введите год рождения преподавателя (только год): " << endl;
            cin >> year_b;
            year_prepod.push_back(year_b);
        }
    }
    void print() const {
        cout << "\n--- Prepod ---" << endl;
        cout << "Имена преподавателей: ";
        for (const string& n : prepod_name) cout << n << " "; cout << endl;
        cout << "Фамилии преподавателей: ";
        for (const string& ln : prepod_lastname) cout << ln << " "; cout << endl;
        person::print();
        date::print();
    }
};

class myp : public person, public date {
    protected:
        vector<string> myp_name;
        vector<string> myp_lastname;
    public:
        myp() {};
        myp(int num_myp, vector<string> myp_name, vector<string> myp_lastname,
            vector<int> day_myp, vector<int> month_myp, vector<int> year_myp) {
            this->num_myp = num_myp;
            this->myp_name = myp_name;
            this->myp_lastname = myp_lastname;
            this->day_myp = day_myp;
            this->month_myp = month_myp;
            this->year_myp = year_myp;
        }
    void myps() {
        int del;
        cout << "Введите количество MYP" << endl;
        cin >> del;
        for(int i = 0; i < del; i++) {
            string name;
            cout << "Введите имя MYP" << endl;
            cin >> name;
            myp_name.push_back(name);
            string lastname;
            cout << "Введите фамилию MYP" << endl;
            cin >> lastname;
            myp_lastname.push_back(lastname);
            int day_b;
            cout << "Введите день рождения MYP (только день): " << endl;
            cin >> day_b;
            day_myp.push_back(day_b);
            int month_b;
            cout << "Введите месяц рождения MYP (только месяц): " << endl;
            cin >> month_b;
            month_myp.push_back(month_b);
            int year_b;
            cout << "Введите год рождения MYP (только год): " << endl;
            cin >> year_b;
            year_myp.push_back(year_b);
        }
    }
    void print() const {
        cout << "\n--- MYP ---" << endl;
        cout << "Имена MYP: ";
        for (const string& n : myp_name) cout << n << " "; cout << endl;
        cout << "Фамилии MYP: ";
        for (const string& ln : myp_lastname) cout << ln << " "; cout << endl;
        person::print();
        date::print();
    }
};

class course : public student, public prepod {
    protected:
        int num_course_s;
        vector <int> course_s;
        vector <string> nuz_course;
    public:
        course() : num_course_s(0) {};
        course(vector <int> course_s, vector <string> student_lastname, int num_course_s, vector <string> nuz_course, vector <string> prepod_lastname, int num_student) {
            this->course_s = course_s;
            this->student_lastname = student_lastname;
            this->num_course_s = num_course_s;
            this->nuz_course = nuz_course;
            this->prepod_lastname = prepod_lastname;
        }
    void num_course() {
        cout << "Введите количество курсов: " << endl;
        cin >> num_course_s;
        int num_students = student_lastname.size();
        int num_teachers = prepod_lastname.size();
        vector<string> course_names(num_course_s);
        vector<vector<string>> course_students(num_course_s);
        vector<vector<string>> course_teachers(num_course_s);
        for (int i = 0; i < num_course_s; i++) {
            cout << "Введите название курса " << (i + 1) << ": ";
            cin >> course_names[i];
            nuz_course.push_back(course_names[i]); // сохраняем
            course_s.push_back(i);
            cout << "Выберите студентов для курса \"" << course_names[i] << "\":" << endl;
            for (int j = 0; j < num_students; j++) {
                int check;
                cout << student_lastname[j] << " на этом курсе? (1 - да, 0 - нет): ";
                cin >> check;
                if (check == 1) {
                    course_students[i].push_back(student_lastname[j]);
                }
            }
            cout << "Выберите преподавателей для курса \"" << course_names[i] << "\":" << endl;
            for (int j = 0; j < num_teachers; j++) {
                int check2;
                cout << prepod_lastname[j] << " ведёт этот курс? (1 - да, 0 - нет): ";
                cin >> check2;
                if (check2 == 1) {
                    course_teachers[i].push_back(prepod_lastname[j]);
                }
            }
        }
    }
    void print() const {
        cout << "\n--- Course ---" << endl;
        cout << "Количество курсов: " << num_course_s << endl;
        cout << "Номера курсов: ";
        for (int c : course_s) cout << c << " "; cout << endl;
        cout << "Названия курсов: ";
        for (const string& n : nuz_course) cout << n << " "; cout << endl;
        student::print();
        prepod::print();
    }
};

class university {
    protected:
        int id;
        string adress;
        string name;
    public:
        university() : id(0) {};
        university(int id, string adress, string name) {
            this->id = id;
            this->adress = adress;
            this->name = name;
        }
    void id_0() {
        cout << "Введите id университета: " << endl;
        cin >> id;
        cout << "Введите адрес университета: " << endl;
        cin >> adress;
        cout << "Введите информацию о университете (как минимум имя): " << endl;
        cin >> name; 
    }
    void print() const {
        cout << "\n--- University ---" << endl;
        cout << "ID: " << id << endl;
        cout << "Адрес: " << adress << endl;
        cout << "Имя: " << name << endl;
    }
};

class classroom {
    protected:
        int num_classroom;
    public:
        classroom() : num_classroom(-1) {};
        classroom(int num_classroom) {
            this->num_classroom = num_classroom;
        }
    void class_id() {
        int variant;
        cout << "Введите номер класса: " << endl;
        cin >> variant;
        if(variant == num_classroom) {
            cout << "Вы будете в этом классе" << endl;
        }
        else {
            cout << "Такого класса нет" << endl;
        }
    }
    void set_num(int n) { num_classroom = n; }
    void print() const {
        cout << "\n--- Classroom ---" << endl;
        cout << "Номер класса: " << num_classroom << endl;
    }
};

int main() {
    person class_1;
    student class_2;
    prepod class_3;
    myp class_4;
    course class_5;
    university class_6;
    classroom class_7;

    while(true) {
        int change;
        cout << "\nВыберете: ввести id персоналов и студентов(1), ввести информацию о студентах(2),  ввести информацию о преподах(3),  ввести информацию о мупах(4), ввести курсы(5), информацию о университете(6), информацию о классе(7), закончить(0): " << endl;
        cin >> change;
        if(change == 1) {
            class_1.numnum();
        }
        else if(change == 2) {
            class_2.students();
        }
        else if(change == 3) {
            class_3.prepods();
        }
        else if(change == 4) {
            class_4.myps();
        }
        else if(change == 5) {
            class_5.num_course();
        }
        else if(change == 6) {
            class_6.id_0();
        }
        else if(change == 7) {
            int tmp;
            cout << "Задайте номер класса для проверки: ";
            cin >> tmp;
            class_7 = classroom(tmp);
            class_7.class_id();
        }
        else if(change == 0) {
            break;
        }
    }

    cout << "\n\n========== ВСЕ ДАННЫЕ ==========\n";
    class_1.print();
    class_2.print();
    class_3.print();
    class_4.print();
    class_5.print();
    class_6.print();
    class_7.print();

    return 0;
}
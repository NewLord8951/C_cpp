#include <iostream>
using namespace std;

// 1. Исправленное предварительное объявление (должна быть точка с запятой)
class vector_;

class matrix {
private:
    int a, b, c, d;
    friend class vector_;

public:
    matrix(int a, int b, int c, int d) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }

    // 2. Исправленная математика умножения матрицы на вектор
    vector_ transform(vector_ r);

    void print() {
        cout << "Матрица:" << endl;
        cout << "[" << a << " " << b << "]" << endl;
        cout << "[" << c << " " << d << "]" << endl;
    }
};

class vector_ {
private:
    int x, y;
    friend class matrix;

public:
    vector_(int x, int y) {
        this->x = x;
        this->y = y;
    }

    matrix scale(matrix e) {
        // Пример масштабирования матрицы вектором
        e.a *= x;
        e.b *= y;
        e.c *= x;
        e.d *= y;
        return e;
    }

    void print() {
        cout << "Вектор: [" << x << ", " << y << "]" << endl;
    }
};

// Реализация метода transform вне класса
vector_ matrix::transform(vector_ r) {
    // Формула: [a b] * [x] = [a*x + b*y]
    //         [c d]   [y]   [c*x + d*y]
    int new_x = a * r.x + b * r.y;
    int new_y = c * r.x + d * r.y;
    return vector_(new_x, new_y);
}

int main() {
    int a, b, c, d, x, y;

    // 3. Исправленные подписи (теперь понятно, что вводить)
    cout << "=== Ввод матрицы 2x2 ===" << endl;
    cout << "Введите a: "; cin >> a;
    cout << "Введите b: "; cin >> b;
    cout << "Введите c: "; cin >> c;
    cout << "Введите d: "; cin >> d;

    cout << "\n=== Ввод вектора ===" << endl;
    cout << "Введите x: "; cin >> x;
    cout << "Введите y: "; cin >> y;

    matrix w(a, b, c, d);
    vector_ s(x, y);

    cout << "\n--- Исходные данные ---" << endl;
    w.print();
    s.print();

    // 4. Вызов методов преобразования
    vector_ result = w.transform(s);
    cout << "\n--- Результат (Matrix * Vector) ---" << endl;
    result.print();

    // Пример использования scale
    matrix scaled_matrix = s.scale(w);
    cout << "\n--- Результат scale (Vector * Matrix) ---" << endl;
    scaled_matrix.print();

    return 0;
}
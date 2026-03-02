#include <iostream>
#include <cmath>
using namespace std;

class point{
    friend void distance(point b, point a) {
        double c = pow(((a.x - b.x) * (a.x - b.x)) + (a.y - b.y) * (a.y - b.y), 0.5);
        cout << c << endl;
    }
    private:
        int x;
        int y;
    public:
        point(int x, int y) {}
        point() {};
    
    void vvod() {
        cout << "Введите x" << endl;
        cin >> x;
        cout << "Введите y" << endl;
        cin >> y; 
    }
    void vyvod() {
        cout << x << " " << y << endl;
    } 
};

int main() {
    point q, e;
    e.vvod();
    e.vyvod();
    q.vvod();
    q.vyvod();
    distance(q, e);
    return 0;
}
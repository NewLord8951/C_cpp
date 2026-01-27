#include <iostream>
using namespace std;

class Fraction{
  private:
    double x, y;
  public:
    Fraction(int x = 0, int y = 1){} 
    void read(){char s;  cin >> x >> s >> y;}   
    Fraction operator == (Fraction &b) {
      x = x * b.y;
      y = y * b.x;
      return *this;
    } 
  void show() {
    cout << " " << endl;
    cout << x << endl;
    cout << "---" << endl;
    cout << y << endl;
    }
};

int main(){
    Fraction a, b, c;
    a.read();  b.read();
    c = a == b;  c.show();
    return 0;
}
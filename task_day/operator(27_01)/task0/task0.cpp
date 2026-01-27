#include <iostream>
using namespace std;

class Fraction{
  private:
    long long int x, y;
  public:
    Fraction(int x = 0, int y = 1){} 
    void read(){char s;  cin >> x >> s >> y;}   
    Fraction operator + (Fraction &b) {
      x = x * b.y + b.x * y;
      y = y * b.y;
      return *this;
    } 
  void show(){cout << x << "/" << y << endl;}
};

int main(){
    Fraction a, b, c;
    a.read();  b.read();
    c = a + b;  c.show();
    return 0;
}

#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
    int num, den;

    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }
        int g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;
    }

public:
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
        simplify();
    }

    Fraction operator+(const Fraction& f) {
        return Fraction(num * f.den + f.num * den, den * f.den);
    }

    Fraction operator-(const Fraction& f) {
        return Fraction(num * f.den - f.num * den, den * f.den);
    }

    void display() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);

    cout << "Addition: ";
    (f1 + f2).display();

    cout << "Subtraction: ";
    (f1 - f2).display();

    return 0;
}

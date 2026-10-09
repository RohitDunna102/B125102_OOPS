
#include <iostream>
using namespace std;

class Score {
    int score;

public:
    Score(int s = 0) {
        this->score = s;
    }

    Score operator++() {
        ++score;
        return *this;
    }

    Score operator++(int) {
        Score temp = *this;
        score++;
        return temp;
    }

    void display() const {
        cout << score << endl;
    }
};

int main() {
    Score s1(10), s2, s3;

    s2 = ++s1;
    cout << "Prefix result: ";
    s2.display();
    cout << "Score after prefix: ";
    s1.display();

    Score s4(10);
    s3 = s4++;
    cout << "Postfix result: ";
    s3.display();
    cout << "Score after postfix: ";
    s4.display();

    return 0;
}

#include<iostream>
using namespace std;

class Base {
protected:
    int num1, num2;
public:
    Base(int a, int b) : num1(a), num2(b) {}
};

class Derived1 : public Base {
public:
    Derived1(int a, int b) : Base(a, b) {}

    int displayFirst() {
        return num1;
    }
};

class Derived2 : public Base {
public:
    Derived2(int a, int b) : Base(a, b) {}

    int displaySecond() {
        return num2;
    }
};

int main() {
    Derived1 obj1(3, 4);
    Derived2 obj2(3, 4);

    cout << "First number: " << obj1.displayFirst() << endl;
    cout << "Second number: " << obj2.displaySecond() << endl;

    return 0;
}
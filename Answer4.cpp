#include<iostream>
using namespace std;

class Base {
protected:
    int num1;
public:
    Base(int a) : num1(a) {}
};

class Derived1 : public Base {
protected:
    int num2;
public:
    Derived1(int a, int b) : Base(a), num2(b) {}
};

class Derived2 : public Derived1 {
public:
    Derived2(int a, int b) : Derived1(a, b) {}

    int sum() {
        return num1 + num2;
    }
};

int main() {
    Derived2 obj(7, 3);
    cout << "Sum of two numbers: " << obj.sum() << endl;
    return 0;
}
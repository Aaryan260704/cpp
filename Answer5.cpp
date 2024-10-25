#include<iostream>
using namespace std;

// First Base Class
class Base1 {
protected:
    int num1;
public:
    Base1(int a) : num1(a) {}
};

// Second Base Class
class Base2 {
protected:
    int num2;
public:
    Base2(int b) : num2(b) {}
};

// Derived Class
class Derived : public Base1, public Base2 {
public:
    Derived(int a, int b) : Base1(a), Base2(b) {}

    int sum() {
        return num1 + num2;
    }
};

int main() {
    Derived obj(5, 10);
    cout << "Sum of two numbers: " << obj.sum() << endl;
    return 0;
}
#include<iostream>
using namespace std;

class Base {
protected:
    int num1;
public:
    Base(int a) : num1(a) {}
};

class Derived : public Base {
    int num2;
public:
    Derived(int a, int b) : Base(a), num2(b) {}
    
    int product() {
        return num1 * num2;
    }
};

int main() {
    Derived obj(4, 5);
    cout << "Product of two numbers: " << obj.product() << endl;
    return 0;
}
#include<iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void display() {
        cout << "Class B" << endl;
    }
};

class C : public A {
public:
    void display() {
        cout << "Class C" << endl;
    }
};

class D : public A {
public:
    void display() {
        cout << "Class D" << endl;
    }
};

class E : public B, public C, public D {
public:
    void display() {
        cout << "Class E inherits from B, C, and D" << endl;
    }
};

int main() {
    E obj;
    obj.display();  // Class E's display function

    return 0;
}
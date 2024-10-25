#include<iostream>
using namespace std;

class Student {
public:
    // Inline function to display sum of two numbers
    inline int sum(int a, int b) {
        return a + b;
    }
};

int main() {
    Student student;
    int num1 = 10, num2 = 20;
    
    cout << "Sum of two numbers: " << student.sum(num1, num2) << endl;
    return 0;
}
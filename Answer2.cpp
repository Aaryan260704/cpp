#include<iostream>
using namespace std;

class Sum {
public:
    // Constructor for two integers
    Sum(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    // Constructor for two floats
    Sum(float a, float b) {
        cout << "Sum of two floats: " << a + b << endl;
    }

    // Constructor for two characters (char values are added based on their ASCII values)
    Sum(char a, char b) {
        cout << "Sum of two chars (ASCII): " << static_cast<int>(a + b) << endl;
    }
};

int main() {
    Sum obj1(10, 20);         // Sum of two integers
    Sum obj2(5.5f, 2.5f);     // Sum of two floats
    Sum obj3('A', 'B');       // Sum of two chars

    return 0;
}
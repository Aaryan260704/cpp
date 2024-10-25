#include<iostream>
using namespace std;

class PrimeChecker;

class Number {
    int num;
public:
    Number(int n) : num(n) {}
    
    // Declare PrimeChecker as friend class
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(Number& n) {
        if (n.num <= 1) return false;
        for (int i = 2; i <= n.num / 2; i++) {
            if (n.num % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Number n(29);
    PrimeChecker checker;
    
    if (checker.isPrime(n))
        cout << n.num << " is a prime number." << endl;
    else
        cout << n.num << " is not a prime number." << endl;
    
    return 0;
}
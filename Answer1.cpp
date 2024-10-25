#include<iostream>
using namespace std;

class Array {
    int *arr;
    int size;
public:
    
    Array(int a[], int n) {
        size = n;
        arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = a[i];
    }
    
   
    Array(const Array &obj) {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = obj.arr[i];
    }

    
    int sumPositive() {
        int sum = 0;
        for (int i = 0; i < size; i++)
            if (arr[i] > 0)
                sum += arr[i];
        return sum;
    }

    ~Array() {
        delete[] arr;
    }
};

int main() {
    int a[] = {1, -2, 3, 4, -5};
    int n = sizeof(a) / sizeof(a[0]);

    Array original(a, n);
    Array copy = original;  

    cout << "Sum of positive numbers: " << copy.sumPositive() << endl;
    return 0;
}
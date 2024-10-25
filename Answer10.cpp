#include<iostream>
using namespace std;

class Details;  // Forward declaration

class Student {
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    
    // Friend function declaration
    friend void displayDetails(Student, Details);
};

class Details {
    string department;
    string course;
public:
    Details(string dep, string crs) : department(dep), course(crs) {}
    
    // Friend function declaration
    friend void displayDetails(Student, Details);
};

// Friend function definition
void displayDetails(Student s, Details d) {
    cout << "Student Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << d.department << endl;
    cout << "Course: " << d.course << endl;
}

int main() {
    Student student("John", 21);
    Details details("Computer Science", "B.Tech");

    displayDetails(student, details);
    return 0;
}
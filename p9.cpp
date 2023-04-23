#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    string course;
    int marks;
    int year;
public:
    Student(string n, string c, int m, int y) : Person(n), course(c), marks(m), year(y) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person {
private:
    string department;
    int salary;
public:
    Employee(string n, string d, int s) : Person(n), department(d), salary(s) {}
    void display() {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    // Declare objects
    Person* p;
    Student s("Alice", "Computer Science", 95, 2022);
    Employee e("Bob", "Marketing", 50000);
    
    // Demonstrate runtime polymorphism
    p = &s;
    p->display(); // calls Student::display()
    
    p = &e;
    p->display(); // calls Employee::display()
    
    return 0;
}

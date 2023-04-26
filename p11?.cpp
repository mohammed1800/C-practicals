#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student {
private:
    int rollNo, year;
    string name, className;
    double totalMarks;
public:
    Student() : rollNo(0), year(0), name(""), className(""), totalMarks(0.0) {}
    
    void setRollNo(int rollNo) {
        this->rollNo = rollNo;
    }
    
    void setName(string name) {
        this->name = name;
    }
    
    void setClass(string className) {
        this->className = className;
    }
    
    void setYear(int year) {
        this->year = year;
    }
    
    void setTotalMarks(double totalMarks) {
        this->totalMarks = totalMarks;
    }
    
    int getRollNo() {
        return rollNo;
    }
    
    string getName() {
        return name;
    }
    
    string getClass() {
        return className;
    }
    
    int getYear() {
        return year;
    }
    
    double getTotalMarks() {
        return totalMarks;
    }
    
    friend ostream& operator<<(ostream& os, const Student& student);
    friend istream& operator>>(istream& is, Student& student);
};

ostream& operator<<(ostream& os, const Student& student) {
    os << student.rollNo << "," << student.name << "," << student.className << "," << student.year << "," << student.totalMarks;
    return os;
}

istream& operator>>(istream& is, Student& student) {
    char comma;
    is >> student.rollNo >> comma >> student.name >> comma >> student.className >> comma >> student.year >> comma >> student.totalMarks;
    return is;
}

int main() {
    ofstream outFile("students.txt");
    
    for (int i = 1; i <= 5; i++) {
        Student student;
        student.setRollNo(i);
        cout << "Enter the name of student " << i << ": ";
        getline(cin, student.name);
        cout << "Enter the class of student " << i << ": ";
        getline(cin, student.className);
        cout << "Enter the year of student " << i << ": ";
        cin >> student.year;
        cout << "Enter the total marks of student " << i << ": ";
        cin >> student.totalMarks;
        outFile << student << endl;
        cin.ignore();
    }
    
    outFile.close();
    
    ifstream inFile("students.txt");
    
    Student student;
    while (inFile >> student) {
        cout << student << endl;
    }
    
    inFile.close();
    
    return 0;
}

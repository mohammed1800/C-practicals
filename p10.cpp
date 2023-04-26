#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b, c;
public:
    Triangle(double sideA, double sideB, double sideC) : a(sideA), b(sideB), c(sideC) {
        if (a <= 0 || b <= 0 || c <= 0) {
            throw invalid_argument("Sides must be greater than 0");
        }
        if (a + b <= c || a + c <= b || b + c <= a) {
            throw invalid_argument("Sum of any two sides must be greater than the third side");
        }
    }
    
    double area() {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    
    double area(double base, double height) {
        return 0.5 * base * height;
    }
};

int main() {
    try {
        double s1,s2,s3;
        cout<< "enter the sides of the first triangel:" << endl;
        cin >> s1 >> s2 >> s3;
        
        Triangle t1(s1, s2, s3);
        cout << "Area of the triangle using Heron's formula: " << t1.area() << endl;
        
        double s4,s5,s6;
        cout << "enter the sides of the second triangel:" << endl;
        cin >> s4 >> s5 >> s6;
    
        Triangle t2(s4, s5, s6);
        cout << "Area of the triangle using Heron's formula: " << t2.area() << endl;
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    
    Triangle t3(4, 3, 5);
    cout << "Area of the right-angled triangle: " << t3.area(4, 3) << endl;
    
    return 0;
}

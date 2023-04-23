#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    
    char c;
    while (inFile.get(c)) {
        if (!isspace(c)) {
            outFile << c;
        }
    }
    
    inFile.close();
    outFile.close();
    
    return 0;
}

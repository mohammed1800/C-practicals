#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please enter text as command line argument." << endl;
        return 0;
    }
    
    string text = argv[1];
    int charCount[26] = {0};
    
    for (char c : text) {
        if (isalpha(c)) {
            charCount[tolower(c) - 'a']++;
        }
    }
    
    cout << "Alphabet Count Table:" << endl;
    for (int i = 0; i < 26; i++) {
        cout << static_cast<char>('a' + i) << ": " << charCount[i] << endl;
    }
    
    return 0;
}

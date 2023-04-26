#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeArrays(vector<int> arr1, vector<int> arr2) {
    int i = 0, j = 0;
    vector<int> result;
    
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }
    
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }
    
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }
    
    return result;
}

int main() {
    // Initialize arrays
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6, 8, 10};
    
    // Merge arrays
    vector<int> result = mergeArrays(arr1, arr2);
    
    // Print result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}

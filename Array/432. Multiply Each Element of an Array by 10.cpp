#include <iostream>
#include <vector>
using namespace std;

// Define the function outside of main
vector<int> multiplyByTen(const vector<int>& arr) {
    vector<int> copyofarr = arr;
    
    int size = arr.size();
    for (int i = 0; i < size; i++) {
        copyofarr[i] = copyofarr[i] * 10;
    }

    return copyofarr;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> result = multiplyByTen(numbers);

    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

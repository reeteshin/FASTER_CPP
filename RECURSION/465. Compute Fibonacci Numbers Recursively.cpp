#include <iostream>
using namespace std;

int PrintFebo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int ans = PrintFebo(n - 1) + PrintFebo(n - 2);
    return ans;
}

int main() {
    int n=5;
    // cout << "Enter the number of terms: ";
    // cin >> n;

    cout << "Fibonacci sequence up to " << n << " terms:" << endl;
    for (int i = 0; i < n; i++) {
        cout << PrintFebo(i) << " ";
    }
    cout << endl;

    return 0;
}

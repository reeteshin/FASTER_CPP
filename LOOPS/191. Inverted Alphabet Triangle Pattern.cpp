#include<iostream>
using namespace std;


// ABCDE
// ABCD
// ABC
// AB
// A
int main(){
    char c = 'A';
    int n = 5;
    // cout<<~n;
    for(int i = n; i >= 1; i--) {
        for(char j = 'A'; j < 'A' + i; j++) {
            cout << j;
        }
        cout << endl;
    }
}
#include<iostream>
using namespace std;

// Recursively print one row of stars
void printRow(int col, int n) {
    if (col == n) return;
    cout << "* ";
    printRow(col + 1, n);
}

// Recursively print n rows
void printSquare(int row, int n) {
    if (row == n) return;
    printRow(0, n);      // print one full row
    cout << endl;
    printSquare(row + 1, n);  // move to next row
}

int main() {
    // int n = 5;
    // printSquare(0, n);
    // return 0;

char str[] = "Hello World";
cout << str[0];
return 0;

}

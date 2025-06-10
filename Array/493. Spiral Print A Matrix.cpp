#include <iostream>
#include <vector>
using namespace std;


// → 1 2 3 4 5

// ↓ 10 15 20 25

// ← 24 23 22 21

// ↑ 16 11 6

// → 7 8 9

// ↓ 14 19

// ← 18 17

// ↑ 12

// → 13




int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5}, 
        {6, 7, 8, 9, 10}, 
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}, 
        {21, 22, 23, 24, 25}
    };

    int totalRows = matrix.size();
    int totalCols = matrix[0].size();
    int totalElements = totalRows * totalCols;
    int count = 0;

    int startRow = 0;
    int startCol = 0;
    int endRow = totalRows - 1;
    int endCol = totalCols - 1;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;


    cout << "Total Rows: " << totalRows << endl;
    cout << "Total Cols: " << totalCols << endl;
    cout << "Total Elements in Matrix: " << totalElements << endl;

    while(count<totalElements){
     
        //left to right top
        for(int i = startCol;i<=endCol&& count<totalElements;i++){
            cout<<matrix[startRow][i];
            count++;
        }
        startRow++;

        for(int i = startRow;i<=endRow&& count<totalElements;i++){
            cout<<matrix[i][endCol];
            count++;
        }
        endCol--;

        for(int i = endCol;i>=startCol&& count<totalElements;i--){
            cout<<matrix[endRow][i];
            count++;
        }
        endRow--;

        for(int i = endRow;i>=startRow&& count<totalElements;i--){
            cout<<matrix[i][startCol];
            count++;
        }
        startCol++;

    }




    return 0;
}

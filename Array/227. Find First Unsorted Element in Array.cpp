#include<iostream>
#include<vector>
using namespace std;

// requirement :-
// Given an array of integers, 
// determine the index of the first 
// element that breaks the sorted order of the array

int main(){
//given array
// In this example, the elements from index 0 to 3 are in
// non-decreasing 
// order. However, the element at index 4 is '6',
//  and the next element at index 5 is '5', 
//  which violates the non-decreasing order
//   because '6' is greater than '5'.
//  Thus, index 4 is identified as the first unsorted element.
    vector<int> arr={1, 2, 3, 4, 6, 5, 7, 8};

    int isOrderBroken = false;
    int i = 0;
    while (i!=arr.size()-1)
    {
        if(arr[i]>arr[i+1]){
            cout<<i;
            isOrderBroken = true;
        }
       i++;
    }
    

}
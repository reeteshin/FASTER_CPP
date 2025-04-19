#include <iostream>
#include <vector>
using namespace std;
// nums = [4, 2, 7, 1, 9, 3]
// target = 7


int main(){

    // int arr[] = {};
    vector<int> arr = {4, 2, 7, 1, 9, 3};
    int size = arr.size();

    cout<<size;

    int target = 7;

    for(int i = 0 ;i<size;i++){
        if(arr[i]==target){
            // return 1;
            cout<<"FOUND THE NUMBER";
        }
    }
    cout<< "NO ELEMENT PRSENT";




}
#include<iostream>
#include<vector>
using namespace std;
// For example, if you have an array [1, 2, 3, 4], 
// after performing the right 
// shift operation, the array should become [4, 1, 2, 3].

// Example:

// Input: [5, 10, 15, 20]
// Output: [20, 5, 10, 15]
// Here, the last element 20 is
// moved to the front, and 
// each of the other elements is 
// shifted one position to the right.


int main(){
  vector<int> arr = {1,2,33,4};
  int s = arr.size();
  int temp = arr[s-1];
  for(int i = s-1 ;i>=0;i--){
       if(i!=0){

           arr[i] = arr[i-1];
        }else{
            arr[0] = temp;
        }
  }


  for( int k : arr){
    cout<<k<<endl;
  }
}
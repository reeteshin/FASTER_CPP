#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    // [5, 6, 7, 1, 2, 3, 4]
    int k = 3;
    int n = arr.size();
    k = k%n; //to avoid unnecessary rotation
    vector<int> temp;

    // cout<<n;
    //copy last element
    for(int i =(n-k);i<n;i++){
        temp.push_back(arr[i]);
    }
    //shifting the element to right side

    for(int j = n-1;j>=0;j--){
        // cout<<arr[j]<<endl;
        arr[j] = arr[j-k];
    }
    //now copying the last element to the front
    for(int l = 0;l<k;l++){
        arr[l] = temp[l];
    }
    

  

    for(int p : arr){
        cout<<p<<endl;
    }

    
}
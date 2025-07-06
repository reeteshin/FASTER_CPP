#include<iostream>
#include<vector>

using namespace std;


void seenArray(vector<int> arr,vector<bool> seen){
    for(int num : arr){
        seen[num] = true;
    }
    for(int i = 0 ;i<arr.size();i++){
        if(!seen[i]){

            // cout<< i;
        }
        
    }
    for(int i = 0 ;i<seen.size();i++){
        cout<<arr[i]<<"---> "<<seen[i]<<endl;
    }
}

int main(){
    //WE HAVE TWO METHOD FOR SOLVING THIS PROBLEM
    //sum method need be trid
    //this is xor operation 



    // int a = 2; // 0010
    // int b = 3; // 0011
    // int result = a ^ b;
    // cout << result << endl;


    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    int n = arr.size();
    vector<bool> seen(n+1,false);
    seenArray(arr,seen);



    
    // int n = arr.size();
    // int ans = 0 ;
    // for(int i = 0 ;i<n;i++){ // check unique element in array
    //     ans = ans^arr[i];
    // }

    // cout<<"ans"<<ans<<endl;

    // for(int i = 0 ;i<=n;i++){ // check range o to n
    //     ans = ans^i;
    // }
    // cout<<ans;
}
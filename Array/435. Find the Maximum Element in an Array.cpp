#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;


int main(){

     vector<int> arr = {1,2,3,4,5};

     int max = INT_MIN;

     for(int i = 0 ;i<arr.size();i++){
        if(max<arr[i]){
            max = arr[i];
        }
     }
     cout<<max;
}
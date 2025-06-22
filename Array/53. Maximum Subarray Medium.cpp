#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printAllsubarray(vector<int> arr){
// O(n)^3 
    for(int i =0 ;i<arr.size();i++){
        for(int j = i ;j<arr.size();j++){
            for(int k = i ;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }

}
void PrintSumOFallSubArray(vector<int> a){
// O(n)^2
// (i=0)
//  ├── (j=0) → sum = a[0] = 1
//  │     └── (j=1) → sum = 1 + a[1] = 3
//  │            └── (j=2) → sum = 3 + a[2] = 6
// (i=1)
//  ├── (j=1) → sum = a[1] = 2
//  │     └── (j=2) → sum = 2 + a[2] = 5
// (i=2)
//  └── (j=2) → sum = a[2] = 3

    for(int i=0;i<a.size();i++){
        int sum = 0;
        for(int j = i ;j<a.size();j++){
            sum = sum+a[j];
            cout<<"sum--> "<<sum<<endl;
        }
    }

}
void SubarraySumOptimalKedansAlgo(vector<int> a){

    int i = 0;
    int sum = a[i];
    int maxi = 0;

    while(i<a.size()){
        sum = sum + a[i];
        maxi = max(maxi ,sum);
        if(sum<0){
            sum = 0;
        }
        i++;
    }
    cout<<maxi;

}
int main(){

    vector<int> a = {2, 3, 4, -1, 2, -1, 3, -5, 4};
    SubarraySumOptimalKedansAlgo(a);


}
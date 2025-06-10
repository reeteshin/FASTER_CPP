#include<iostream>
#include<climits>
#include<vector>
using namespace std;


int solve(vector<int> arr,int index, int min){

    if(index==arr.size()) return min;
    if(arr[index]<min){
       min = arr[index];
    }

    // cout<<arr[index]<<endl;
    return solve(arr,index+1,min);

    // return min;

}
int main(){

    vector<int> arr = {-1, -2, -3, -4, -5, -6, -7};
    int min = INT_MAX;
    int index = 0;
    cout<<solve(arr,index,min)<<endl;

}
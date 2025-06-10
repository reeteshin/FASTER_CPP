#include<iostream>
#include<vector>
using namespace std;


void EVEN(vector<int> arr,vector<int> &a,int n,int inx){
    if(inx==n)return;
    
    // cout<<a[inx]<<endl;
    if(arr[inx]%2==0){
        // cout<<arr[inx]<<endl;
        a.push_back(arr[inx]);
    }
    EVEN(arr,a,n,inx+1);

}

int main(){

    // arr = [2, 3, 5, 6, 8, 11] n = 6
    vector<int> arr = {2,3,4,6,8,11};
    vector<int> a;
    int index = 0;

    EVEN(arr,a,arr.size(),index);

    for(int i : a){
        cout<<i<<endl;
    }





}
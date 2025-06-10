#include<iostream>
#include<vector>
using namespace std;


int SearchElement(vector<int> arr,int target,int n){
   
    if(n==0)return 0;
    cout<<n<<endl;
    if(target == arr[n]){
        return n;
    }
    return SearchElement(arr,target,n-1);
}

int main(){


    vector<int> arr = {1,3,4,6,7,8};
    int n = arr.size()-1;
    int target = 8;
    
    int returnIndex =  SearchElement(arr,target,n);

    cout<<"returnIndex"<<returnIndex<<endl;

    // cout<<"WHAT YOU GOT FROM RETURN"<< FI(n)<<endl;



}
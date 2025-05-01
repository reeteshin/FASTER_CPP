#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> v,int n,int target){
    int start = 0;
    int end = n-1;
    
    while(start<=end){
        int mid = start+(end-start)/2;

        if(v[mid] == target){
             return mid;
        }else if(v[mid]<target){
             start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int main(){

    vector<int> v = {1,2,3,4,5,6,7};
    
    int n = v.size();
    int target = 2;

    int result =  BinarySearch(v,n,target);

    if(result !=-1){
        cout<<"Element Found at index :>>  "<<result<<endl;
    }else{
        cout<<"Element not found :>> "<<result<<endl;
    }

   


}
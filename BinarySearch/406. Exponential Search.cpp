#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(vector<int> arr, int start,int end, int target){
    
    // int start = 0;
    // int end = arr.size()-1;

    cout<<"start>>"<<start<<"end>>"<<end;

    while(start<=end){
        int mid = start+(end-start)/2;

        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target) {
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}

int ExponentialSearch(vector<int> arr,int size,int target){
    if(target == arr[0]) return arr[0];
    int i = 1;
    // int lastPositionofI= 0;
    while(i<size&&arr[target]<=target){
        // lastPositionofI = i;
        i = i*2;
        // cout<<i<<endl;
    }

    int end = min(i,size-1); // we calculate min then we will go half of end 
    int start =end/2; 

    cout<<"WHAT VALUE ARE WE SENDING>> "<<size << "->"<< i<<end;
    return BinarySearch(arr,start,end,target);



}


int main(){
    //SO THIS IS THE PART OF BINARY SEARCH
    //WHERE WE APPLY SEARCH IN SOME PART OF ARRAY

    vector<int>  arr= {1,2,5,6,7,8,9,11,13,15,16,17,18,19,20,22,23,24};

    int target = 19;
    int result =  ExponentialSearch(arr,arr.size(),target);

    cout<<"result"<<result;



    


}
#include<iostream>
#include<vector>
#include<climits>

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
int main(){

    // PENDING


    vector<int> arr = {1,2,3,4,5,6,8,9,10,11,12,13,14,15,16};
    //IN UNBOUNDES SEARCH WE DONT KNOW THE N
    //MEANS THE SIZE OF ARRAY
    //SO THE TASK IS TO FIND THE RANGE OF ARRAY WHERE TARGET COULD BE
    //THEN APPLY BINARY SEARCH
    int target  = 15;

    int i = 0;
    int j = 1;

    while(j<arr.size()&& arr[j]<target){
        i = j;
        j = j*2;
    }
    // int end = min(j,arr.size()-1);
    cout<<"Start"<<i<<endl;
    cout<<"End"<<j<<endl;

    int result = BinarySearch(arr,i,j,target);

    cout<<"result"<<result;


}

#include<iostream>
#include<vector>

using namespace std;

int FirstOccurrence(vector<int> arr,int n,int target){
    // {1,2,3,5,6,6,6,9,8,10}
     // 0 1 2 3 4 5 6 7 8 9

     int store = 0;

     int start = 0;
     int end = n-1;

     while(start<=end){

        int mid = start+(end-start)/2;

        if(arr[mid] == target){
             store = mid;
             end = mid-1;
        }else if(target>arr[mid]){
             start = mid+1;
        }else{
             end = mid-1;
        }

     }
     cout<<"store"<<store<<endl;
     return store;

}
int LastOccurrence(vector<int> arr,int n,int target){
    // {1,2,3,5,6,6,6,9,8,10}
     // 0 1 2 3 4 5 6 7 8 9

     int store = 0;

     int start = 0;
     int end = n-1;

     while(start<=end){

        int mid = start+(end-start)/2;

        if(arr[mid] == target){
             store = mid;
             start = mid+1;
        }else if(target>arr[mid]){
             start = mid+1;
        }else{
             end = mid-1;
        }

     }
     cout<<"store"<<store<<endl;
     return store;

}

int main(){


    // JUST WE HAVE TO DECIDE THE WHICH SIDE WHE HAVE TO GO
    // LAST OCCURNCE RIGHT SIDE // START  = MID + 1
    //FIRST OCCURANCE LEFT SIDE // END  = MID - 1; 
    vector<int> arr = {1,2,3,5,6,6,6,9,9,10};

    // store n compute 
    int target = 6;
    int n = arr.size();
    int result = LastOccurrence(arr,n,target)-FirstOccurrence(arr,n,target)+1;
    // int occarance = 0;
    cout<<result;
    


}
// 410. EKO SPOJ
#include<iostream>
#include<vector>

// trees = [20, 15, 10, 17], m = 7
// Output:

// 15
// Explanation:Cutting at height 15 gives
// wood pieces of [5, 0, 0, 2] totaling 7.

using namespace std;

//first find the max from array that will become the range for 
//binary search
int FindMax(vector<int> arr){
    int max = 0;
    for(int i = 0 ;i<arr.size();i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;

}
bool CheckWoodCollected(vector<int> arr,int mid,int m){
     int collectedWood = 0;

     for(int i = 0 ;i<arr.size();i++){
        if(arr[i]>=mid){
            collectedWood += arr[i]-mid;
        }
     }
     cout<<"collectedWood  "<<collectedWood<<" mid -- "<<mid<<endl;
     if(collectedWood>=m) return true;
     else return false;
}

int FindLengthOFswaBlade(vector<int> arr,int max,int m){
    int start = 0;
    int end = max;
    int ans = 0;

    while(start<=end){
        int mid = start+(end-start)/2;
        if(CheckWoodCollected(arr,mid,m)){
           ans = mid;
           start = mid+1;
        }else{
            end = mid-1;
        }

    }
    return ans;
}
int main(){
    int m = 7;
    vector<int> arr = {20, 15, 10, 17};
    int max = FindMax(arr);
    // cout<<max;

  
    cout<<FindLengthOFswaBlade(arr,max,m);
}
#include<iostream>
#include<vector>

using namespace std;

int findPivotIndex(vector<int>& nums){
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int ans=-1;
    
        while(start<=end){
            int mid = start+(end-start)/2;
             //mid+1<n mid should not go out side the array
             //
             if(mid+1<n && nums[mid]>nums[mid+1]){//LANDED ON PEAK ELEMENT
                return mid;
             }else if(nums[mid]<nums[start]){//L2 line
                end = mid-1;
             }else{ //L1 Line
                start = mid+1;
             }
           
        }
        return ans;
    }
int main(){

   vector<int> arr = {40,50,60,70,10,20,30};
   
   cout<<findPivotIndex(arr);

}
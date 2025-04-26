#include<iostream>
#include<vector>
using namespace std;


void Sort(vector<int> nums,int size){
    int start = 0;
    int end = size-1;

    while (start<end)
    {
        if(nums[start]==1 && nums[end]==0){
            swap(nums[start],nums[end]);
            start++;
            end--;
        }else if(nums[start]==0 ){
            start++;
        }else if( nums[end]==1){
            end--;
        }
    }
    for(int n : nums){
        cout<<n<<endl;
    }
    


}


int main(){
    vector<int> arr = {1,1,1,1,0,0,0,0};

    Sort(arr,arr.size());
}
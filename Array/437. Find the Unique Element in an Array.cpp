#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n = 0;
    int ans =0;
    vector<int> nums = {1,2,1,2,0,0,5,5,9,9,8};
    //after learning XOR 
    // this is the method that`s comes in my mind 1st

    for(int i = 0;i<nums.size();i++){
        ans = ans^nums[i];
    }
    cout<<ans;


}
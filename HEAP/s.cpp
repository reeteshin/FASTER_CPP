#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//this is tow sum quetion i will be doing this using map 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> arr;  // {value, original_index}
        for(int i=0; i<nums.size(); i++){
            arr.push_back({nums[i], i});
        }
        for(int i=0; i<nums.size(); i++){
            cout<<arr[i].first <<"---> " <<arr[i].second<<endl;
        }


        sort(arr.begin(), arr.end()); // sort by value automatically

        int i = 0;
        int j = arr.size() - 1;
        while (i < j) {
            int sum = arr[i].first + arr[j].first;
            if (sum == target) {
                return {arr[i].second, arr[j].second}; // return original indices
            } else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }
        return {};
    }
};
int main(){
    vector<int> arr = {1,3,5,6,7,8,9};
    Solution o;
    o.twoSum(arr,6);
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Example 1:

// Input:

// nums1=[2,4,3] nums2=[5,6,4]
// Output:

// 7 0 8
// Explanation:342 + 465 = 807 → reversed digits [7,0,8]


int main(){


    vector<int> a1 = {3,4,5};
    vector<int> a2 = {7,8};
    vector<int> ans;

    int i = a1.size() - 1;
    int j = a2.size() - 1;
    int carry = 0;
    while (i >= 0 || j >= 0 || carry) {

      int digit1 = i >= 0 ? a1[i] : 0;
      int digit2 = j >= 0 ? a2[j] : 0;
      int sum = digit1 + digit2 + carry;
      int lastDigit = sum % 10;
      carry = sum / 10;
      ans.push_back(lastDigit);
      i--,j--;
    }
    reverse(ans.begin(), ans.end());
    // return ans;
    
    // vector<int> a1 {1,8};
    // vector<int> a2 = {0};
    // vector<int> ans;
    // int i = a1.size()-1;
    // int j= a2.size()-1;
    // int carry = 0;
    // while(i>=0 && j>=0){
        
    //     int addition = a1[i]+a2[j]+carry;
    //     int x = addition%10;
    //     carry = addition/10;
    //   //  cout<<digit<<reminder<<endl;
    //     ans.push_back(x);
        
    //     // cout<<addition<<endl;
    //     i--;
    //     j--;
    // }

    // while(i>=0){
        
    //     int addition = a1[i]+0+carry;
    //     int x = addition%10;
    //     carry = addition/10;
    //   //  cout<<digit<<reminder<<endl;
    //     ans.push_back(x);
        
    //     // cout<<addition<<endl;
    //     i--;
    //     // j--;
    // }
    // while(j>=0){
        
    //     int addition = 0+a2[j]+carry;
    //     int x = addition%10;
    //     carry = addition/10;
    //   //  cout<<digit<<reminder<<endl;
    //     ans.push_back(x);
        
    //     // cout<<addition<<endl;
    //     // i--;
    //     j--;
    // }
    
    for(int k : ans){
        cout<<k<<" ";
    }
    // cout<<"is carry left >> "<<carry<<endl;

    
    // if(carry>0){
    //     ans.push_back(carry);
    // }
    // for(int i = ans.size()-1;i>=0;i--){
    //     cout<<ans[i]<<" ";
    // }

    // cout<<a1[i]<<endl;

    // cout<<a2[j]<<endl;

    // for(int )



    
}
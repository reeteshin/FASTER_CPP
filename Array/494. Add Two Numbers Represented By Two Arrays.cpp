#include<iostream>
#include<vector>
using namespace std;

// Example 1:

// Input:

// nums1=[2,4,3] nums2=[5,6,4]
// Output:

// 7 0 8
// Explanation:342 + 465 = 807 → reversed digits [7,0,8]


int main(){
    
    vector<int> a1 {1,8};
    vector<int> a2 = {0};
    vector<int> ans;
    int i = a1.size()-1;
    int j= a2.size()-1;
    int carry = 0;
    while(i>=0 && j>=0){
        
        int addition = a1[i]+a2[j]+carry;
        int x = addition%10;
        carry = addition/10;
      //  cout<<digit<<reminder<<endl;
        ans.push_back(x);
        
        // cout<<addition<<endl;
        i--;
        j--;
    }

    while(i>=0){
        
        int addition = a1[i]+0+carry;
        int x = addition%10;
        carry = addition/10;
      //  cout<<digit<<reminder<<endl;
        ans.push_back(x);
        
        // cout<<addition<<endl;
        i--;
        // j--;
    }
    while(j>=0){
        
        int addition = 0+a2[j]+carry;
        int x = addition%10;
        carry = addition/10;
      //  cout<<digit<<reminder<<endl;
        ans.push_back(x);
        
        // cout<<addition<<endl;
        // i--;
        j--;
    }
    
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
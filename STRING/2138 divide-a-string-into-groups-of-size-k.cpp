#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> ans;
    string s = "abcdefghip";
    int k = 3;
    char fill = 'x';
    int cur = 0;
    while(cur<s.length()){
        ans.push_back(s.substr(cur,k));
        cur = cur+k;
    }
    // cout<<ans.back()<<endl;
    ans.back() += string(k - ans.back().length(), fill);
       
    for(string o : ans){
        cout<<o<<endl;
    }
}
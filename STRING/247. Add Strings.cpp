#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s1 = "123";
    string s2 = "999";
    int i = s1.length()-1;
    int j = s2.length()-1;

    cout<<i<<endl;
    string ans; 

    int carry = 0;
    while(i>=0 || j>= 0 || carry){

        int digit1 = i>=0 ? s1[i]-'0' : 0;
        int digit2  = j>=0 ? s2[j]-'0' : 0; 

        // cout<<"digit"<<digit<<endl;
        int sum = digit1 + digit2 + carry ; 

        int lastDigit = sum%10;
        carry = sum/10;

        ans.push_back(lastDigit+'0');
        i--,j--;
    }


    cout<<"carry - -- >  "<<carry<<endl;

    // if(carry){
    //     ans.push_back(carry+'0');
    // }
    //reverse(ans.begin(),ans.end());
    cout<<ans<<endl;


}
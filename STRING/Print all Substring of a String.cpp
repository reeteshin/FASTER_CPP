#include<iostream>
#include<string>
// #include<>
using namespace std;


void Print(string s,int len,int idx){
        if(idx==len)return ;
        Print(s,len,idx+1);
        cout<<s[idx];//this is tail recursion because we are printing when stack is poping
}
int main(){
    string s = "meena";
    int len = s.length();
    int inx = 0;
    Print(s,len,inx);
    // itratively all substring
    // int count = 0 ;
    // for(int i = 0;i<s.length();i++){
    //     for(int j = i;j<s.length();j++){
    //         cout<<s.substr(i,j-i+1);
    //         count++;
    //         // for(int k = i;k<=j;k++){
    //         //     cout<<s[k];
    //         // }
    //         cout<<endl;
    //     }
    // }
    // cout<<count<<endl;
   
}
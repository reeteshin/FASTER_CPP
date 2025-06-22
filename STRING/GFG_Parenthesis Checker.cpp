#include<iostream>
#include<vector>
using namespace std;

int findLastOpeningIndex(string s){
    for(int i = 0;i<s.length();i++){
        if(s[i]=='{' || s[i]=='[' || s[i] =='('){
            
        }
    }
}
int main(){

    string s = "[{()}]";

    vector<char> res(s.length()+1);

    for(int i = 0 ;i<s.length();i++){
        res[s[i]]++;
    }


    for(char i : res){
        cout<<i<<endl;
    }


}
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    // we will we using hash array in this in this 

    //we will store the word and we will match to the another string

    int hash[256] = {0};
    bool ismapped[256] ={false};
    string s = "egg";
    string t = "add";

    for(int i = 0 ;i<s.length();i++){
        if(hash[s[i]]==0 && ismapped[t[i]]==0){
            hash[s[i]] = t[i];
            ismapped[t[i]] = true;
        }
    }
    for(int i = 0 ; i < s.length(); i++) {
        if ((char)hash[s[i]] != t[i]) {
           return false;
        } 
    }

    return true;
    


    

}
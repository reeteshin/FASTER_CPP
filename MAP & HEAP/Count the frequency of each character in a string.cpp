// Count the frequency of each character in a string

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

// Input: 
// S = "geeksforgeeks", N = 2
// Output: 4
// Explanation: 'g', 'e', 'k' and 's' have
// 2 occurrences.

int main(){

    unordered_map<char,int> map;

    string s = "geeksforgeeks";
    int N = 2;

    for(int i = 0 ;i<s.length();i++){
        if(s[i]!=s[i+1]){
            map[s[i]]++;
        }else{
            map[s[i]];
        }
    }


    int val=0;
            for(auto it:map){
                if(it.second==N)
                    val++;
            }
            cout<<"val"<< val;


    // for(auto i : map){
    //     if(i.second==N){
    //         cout<<i.first<<"-->"<<i.second<<endl;
    //     }
    // }




   



}
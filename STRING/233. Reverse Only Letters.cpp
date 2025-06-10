// 233. Reverse Only Letters
#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;

int main(){

    string s1 = "a-bC-dEf-ghIj";

    string s2 = "";

    int s = 0;
    int e = s1.length()-1;

    while(s<=e){
        
        if(!isalpha(s1[s])){
            s++;
        }
        else if(!isalpha(s1[s])){
            e--;
        }else{
            swap(s1[s],s1[e]);
            s++;
            e--;
            
        }

    }
    cout<<s1;
}


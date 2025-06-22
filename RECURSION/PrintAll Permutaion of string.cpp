#include<iostream>
#include<string>

using namespace std;

void Permute(string &s,int i){
    if(i>=s.length()){
        cout<<s<<endl;
        return ;
    }
    for(int j = i ;j<s.length();j++){
        swap(s[i],s[j]);
        Permute(s,i+1);
        swap(s[i],s[j]);
    }
}

int main(){

    string s = "abc";
    int i = 0;
    Permute(s,i);

}
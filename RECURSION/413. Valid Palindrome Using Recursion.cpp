#include<iostream>
#include<vector>
#include<string>
#include<ctype.h>
#include<algorithm>
using namespace std;




void NormalizeStringUsingRecursion(string s,string &ans,int index){

    if(index == s.length()) return;

    // cout<<s[index] <<endl;
    //doing normalize string

    if(isalpha(s[index])){
        if(s[index]>='A' && s[index]<= 'Z'){
            ans.push_back(s[index] + ('a' - 'A'));
        }else{
            ans.push_back(s[index]);
        }
    }

    NormalizeStringUsingRecursion(s,ans,index+1);

}

bool CheckPalindroidUsingRecursion(string ans,int i,int j){

    if(i>j) return true;

    cout<<"i -- >"<<ans[i]<<i<<endl;
    cout<<"j -- >"<<ans[j]<<j<<endl;
    if(ans[i] == ans[j]) {
        return CheckPalindroidUsingRecursion(ans,i+1,j-1);
    }else{
        return false;
    }



    // return CheckPalindroidUsingRecursion(ans,i+1,j-1);
     
}

int main(){

    string s = "A man, a plan, a canal: Panama";
    string ans;
    
    int index = 0;
    
    NormalizeStringUsingRecursion(s,ans,index);

    int i = 0;
    int j = ans.length()-1;
    bool res = false;
    res=  CheckPalindroidUsingRecursion(ans ,i ,j);
    cout<<"result---> "<<res<<endl;
    
  
   
}
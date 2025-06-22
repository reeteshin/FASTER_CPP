#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

/* 
Summary of Possible Combinations:
    i < 0	j < 0	carry == 0	Condition result	Meaning
    true	true	true	✅ true → stop	All done
    true	false	true	❌ false → keep going	Still digits in s2
    false	true	true	❌ false → keep going	Still digits in s1
    true	true	false	❌ false → keep going	Carry needs to be added
    false	false	false	❌ false → keep going	More digits + carry
*/
void solve(string s1,string s2,int i,int j,string &ans,int &carry){

   if (i < 0 && j < 0 && carry == 0) return;


   int digit1 = i>=0 ?s1[i] - '0' :0;
   int digit2 = j>=0 ? s2[j] - '0' :0;

   int sum = digit1+digit2+carry;
   int lastDigit = sum %10;
   carry = sum /10;

   ans.push_back(lastDigit+'0');

   solve(s1,s2,i-1,j-1,ans,carry);





}

int main(){
    string s1 = "123";
    string s2 = "999";
    int i = s1.length()-1;
    int j = s2.length()-1;
    string ans;
    int carry = 0;

    solve(s1,s2,i,j,ans,carry);

    cout<<ans<<endl;




   


}
#include<iostream>
#include<vector>
using namespace std;

 //map se bhi kar sakte hai
bool IsAnagram(string &s1,string &s2){

    vector<int> frq(1000,0);
    for(int i = 0 ;i<s1.length();i++){
            // cout<<
            frq[s1[i]]++;
    }

    for(int  i = 0 ;i<s2.length();i++){
            frq[s2[i]]--;
    }
    // for(int i = 0 ;i<=frq.size();i++){
    //     if((int)frq[i]>0){
    //         cout<<i << "ASCCAI VALUE-> "<< (int)frq[i]<<endl;
    //     }
    // }
    for(int i = 0 ;i<=frq.size();i++){
        if(frq[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){

    string s1 = "rat";
    string s2 = "car";
    cout<<IsAnagram(s1,s2);

}
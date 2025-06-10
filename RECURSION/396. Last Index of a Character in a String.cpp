#include<iostream>
#include<vector>
#include<string>

using namespace std;



void FindLastIndex(string &str,char x,int n,int &lastIndex){
        if(str.length()==n)return;
        
        if(x ==str[n] && lastIndex<n){
            lastIndex = n;
        }

        cout<<str[n]<<endl;
        FindLastIndex(str,x,n+1,lastIndex);


}

int main(){


   string str = "Geeks";
    char x = 'e';

    int lastIndex = 0;
    int n = 0;

    FindLastIndex(str,x,n,lastIndex);


    cout<<lastIndex<<endl;
    // if(str[3]==x){
    //     cout<<x<<endl;
    // }
}
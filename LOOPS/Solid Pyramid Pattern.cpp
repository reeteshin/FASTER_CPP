#include<iostream>
using namespace std;


void PramidPattern(int n){
    for(int i = 0;i<n;i++){
        // cout<<"*";
        for(int j=0;j<n-i-1;j++){
            cout<<"*";
        }
        for(int k = 0;k<2*i+1;k++){
           cout<<"-";
        }
        cout<<endl;
    }
}


int main(){
    int n=5;

    PramidPattern(n);
}
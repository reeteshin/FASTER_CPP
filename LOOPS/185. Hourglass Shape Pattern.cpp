#include<iostream>
using namespace std;
//for n = 8
// ********
//  ******
//   ****
//    **
//    **
//   ****
//  ******
// ********
int main(){

    int n = 4;

     for(int i = 0 ;i<n;i++){
        for(int j =0;j<i;j++){
            cout<<"-";
        }
        for(int k = 0 ;k<2*n-(2*i);k++){
            cout<<"*";
        }
        cout<<endl;
     }
     for(int i = 1 ;i<=n;i++){
        for(int j =0;j<n-i;j++){
            cout<<"-";
        }
        for(int k = 0 ;k<(2*i);k++){
            cout<<"*";
        }
        cout<<endl;
     }

}
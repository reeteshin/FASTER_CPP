#include<iostream>
using namespace std;
// *********
//  *******
//   *****
//    ***
//     *



int main(){
    int n = 5;
    for(int i = n;i>0;i--){ //loop for row
        for(int k = 0;k<n-i;k++){
         cout<<"_";
        }
       for(int j = 0;j<2*i-1;j++)
       {
        cout<<"*";
       }
       cout<<endl;
    }


}
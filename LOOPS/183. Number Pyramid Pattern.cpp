#include<iostream>
using namespace std;

//for n = 4
//       1
//     1 2
//   1 2 3
// 1 2 3 4



int main(){
  
    int n = 4;

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1 ;j <= n-i ; j++ ){
            cout<<" ";
        }
        for(int k = 1 ;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    } 


}
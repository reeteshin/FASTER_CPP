#include<iostream>
using namespace std;
// n = 3
//    *  
//   *** 
//  *****
//   *** 
//    *  
// n = 5
// ____*
// ___***
// __*****
// _*******
// *********
// -*******
// --*****
// ---***
// ----*
int main(){
    int n = 5;


    //we will print in diffrent part 
    //first part will be of 3 
    //second part will be of 2 

    for(int i = 0 ;i<n ;i++){
      
        for(int j = 1 ;j<n-i;j++){

            cout<<"_";
        }
        for(int j = 0 ; j<2*i+1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
    n--;
    // cout<<n;
    //we need 2 row 
    // so we will decrease the n by one 
    
    for(int i = 0 ;i<n;i++){
        //space then start
        for(int j = 0;j<=i;j++){
            cout<<"-";
        }
        for(int j = 0 ;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;

    }


}
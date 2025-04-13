#include<iostream>
using namespace std;

//    ****
//   ****
//  ****
// ****


int main(){
    int n = 4;
   
    for(int i = 0 ;i<n ;i++){
       for(int j = 1; j<n-i ;j++){
        cout<<"-";
       }
       for(int k = 0; k<n ;k++){
        cout<<"*";
       }
       cout<<endl;
    }

    // int num = 123;
    // int sm = 123;
    // while(num>0){
    //     int small = num%10;

    //     if(small<sm){
    //         sm = small;
    //     }
    //     num = num/10;
    // }
    // // return sm;
    // cout<<sm;


}
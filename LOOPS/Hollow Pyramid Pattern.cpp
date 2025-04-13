#include<iostream>
using namespace std;
    //     *    
    //    *-*   
    //   *---*  
    //  *-----* 
    // *********
    // for n = 5
int main(){

    int n = 5;


    for(int i = 0 ;i<n ;i++){
       for(int sp = 1;sp<n-i;sp++){
        cout<<"-";
       }


       if(i == 0||i==n-1){
           for(int l = 0;l<2*i+1;l++){
            cout<<"* ";
           }

       }else{
        cout<<"*";
        for(int sp = 0 ;sp<(2*i+1)-2;sp++){
            cout<<"-";

        }
        cout<<"*";
       }

       cout<<endl;
    }




    }
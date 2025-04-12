#include<iostream>
using namespace std;
    //     *    
    //    * *   
    //   *   *  
    //  *     * 
    // * * * * *
    // for n = 5
int main(){

    int n = 5;

    for(int i = 0;i<n;i++){
        for(int j= 0 ;j<n-i;j++){
            cout<<"-";
        }

        for(int j = 0;j<2*i+1;j++){
            if(j ==0 || j==1|| j==n){
                cout<<"*";

            }else{
                // cout<<"*";
                // for(int k = 0 ;k<j-2;k++){
                    cout<<"-";
                // }
                // cout<<"*";
            }

           }
        
        cout<<endl;
    }


}
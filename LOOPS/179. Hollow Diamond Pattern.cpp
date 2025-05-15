#include<iostream>
using namespace std;
// ______*
// _____*-*
// ____*---*
// ___*-----*
// __*-------*
// _*---------*
// *-----------*
// -*---------*
// --*-------*
// ---*-----*
// ----*---*
// -----*-*
// ------*
int main(){
    cout<<"";
    int  n = 7;
    for(int i = 0;i<n;i++){
        //space
        for(int j = 1;j<n-i;j++){
            cout<<"_";
        }
        if(i==0){
            for(int k = 0;k<2*i+1;k++){
                cout<<"*";
            }
        }else{
            //middle spaces
            cout<<"*";
            for(int k = 0;k<(2*i+1)-2;k++){
                cout<<"-";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //part 2 
    n--;
    // cout<<n<<endl;
    for(int i = 0;i<n;i++){
        //space
        for(int j = 0 ;j<=i;j++ ){
            cout<<"-";
        }
        if(i == n-1){
            for(int k = 0;k<(2*n-2*i-1);k++){
                cout<<"*";
            }
        }else{
            cout<<"*";
            for(int k=0;k<(2*n-2*i-1)-2;k++){
                cout<<"-";
            }
            cout<<"*";
        }
        cout<<endl;
    }

}
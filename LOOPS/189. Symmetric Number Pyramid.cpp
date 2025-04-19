#include<iostream>
using namespace std;
// n = 4
// 1------1
// 12----21
// 123--321
// 12344321

//there i can see 3 type of pettern
//printing the left part first
//calculating the space we need (even space we will focus)
int main(){
    int n = 4;

    for(int i = 1 ; i <=n ; i++ ){
        //left number part
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        //space part
        for(int sp = 0;sp<2*n-(2*i);sp++){
            cout<<"-";
        }
        //right side part 
        //i reversed the loop for last part
        for(int j = i;j>0;j--){ 
            cout<<j;
        }
        cout<<endl;
    }
}
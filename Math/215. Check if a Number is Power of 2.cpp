//there is bitwise approch to solve this problem

#include<iostream>
using namespace std;

int main(){
    int num = 2;

    if((num &(num-1))==0){
        cout<< "Yes";
    }else{
        cout<< "No";
    }

    // if(n%2==0){
    //     cout<<"number is power of 2 ";
    // }else{
    //     cout<<"NO";
    // }
}
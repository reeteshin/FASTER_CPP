#include<iostream>
using namespace std;

bool isPrime(int n){
    // int n = 17;
    int start = 2;
    int end = n-1;
    bool isPrimeval = true;
    for(int i = start ;i<=end;i++){
        if(n%i==0){
            isPrimeval = false;
        }
    }
    return isPrimeval;
}

int main(){

    int n = 17;
    int start = 2;
    int end = n;
    int count = 0;

    for(int i = start ;i<=end;i++){
         if(isPrime(i)){
            count++;
         }
    }
    cout<<count;
    

}
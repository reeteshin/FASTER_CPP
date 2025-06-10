#include<iostream>
using namespace std;

void PrintDigit(int n){
    if(n==0) return;

    int digit = n%10;
    PrintDigit(n/10);
    cout<<digit<<endl;

}

int main(){

    int n = 12345;
    PrintDigit(n);


}
#include<iostream>
using namespace std;

int main(){
    //given number 
    int n = 12345;
    int store = 0;
    while (n!=0)
    {
        int digit = n%10;
        store =  store*10+digit;

        n = n/10;
    }
    cout<<store<<endl;
    
}
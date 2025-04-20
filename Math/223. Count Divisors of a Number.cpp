#include<iostream>
using namespace std;

int main(){
    int num = 12;
    int n = 6;
    int count = 0;
    for(int i = 1 ;i<=n ;i++)
    {
        if(n%i==0){
            count++;
        }
    }
    cout<<count;
}
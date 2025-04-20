#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int count = 0;

    while (n>0)
    {
        n = n & (n-1);
        count++;
        
    }

    cout<<"The total number of set bit - :-"<<count<<endl;
    //as of now i know we call 1 as set bit

}
#include<iostream>
using namespace std;

int main(){
    //if os is 32 bit
    // then
    // 32 16 8 4 2 1
    int n = 5;
    // we have to find the 2`s complement
    int onesCopliment = ~n;
     
    cout<<"onesCopliment :-"<<onesCopliment<<endl;

    cout<<"2`s Compliment will be"<<onesCopliment+1<<endl;

}
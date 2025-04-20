#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int k = 2;

    int mask = n | (1<<k);
    cout<<mask;
}
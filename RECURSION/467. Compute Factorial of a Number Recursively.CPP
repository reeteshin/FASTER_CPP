#include<iostream>
using namespace std;


int Fectorial(int n){
    if(n==0)return 1;
    // cout<<n<<endl;
    // cout<<n* Fectorial(n-1)<<endl;
    return n * Fectorial(n-1);
}
int main(){

    int n = 5;
    cout<<Fectorial(n)<<endl;
}
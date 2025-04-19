#include<iostream>
using namespace std;

// n = 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

int main(){

    int n = 4;
    // when dealing with number
    //will start loop from 1
    int sum = 0;
    for(int i = 1 ;i<=n;i++){
        for(int j = 1;j<=i;j++){
            sum = sum+1;
            cout<<sum;
        }
        cout<<endl;
    }

}
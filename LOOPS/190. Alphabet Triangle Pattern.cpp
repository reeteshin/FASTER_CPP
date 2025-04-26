#include<iostream>
using namespace std;

int main(){
    char ch ='A'+5;

    cout<<ch<<endl;
    for(char i = 'A';i<'A'+5;i++){
        for(char j = 'A';j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;


int getTheLengthOfString(char arr[]){
    int len = 0;
    int i = 0;
    while(arr[i]!='\0'){
        len++;
        i++;
    }
    return len;
}

int main(){

    char arr[50];

    cin.getline(arr,50);

    int res =  getTheLengthOfString(arr);

    cout<<res;


}
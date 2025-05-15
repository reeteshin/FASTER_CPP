#include<iostream>
#include<vector>
using namespace std;

int main(){
  char arr[50];
  cin.getline(arr,50);
  int i = 0;
  while (arr[i]!='\0')
  {
    if(arr[i]==' '){
        arr[i] = 'X';
    }
    i++;
  }
  
  cout<<arr;
}
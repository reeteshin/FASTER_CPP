#include<iostream>
#include<vector>

using namespace std;


void ConvertToUC(char str[],int size){
    

    int i = 0;
    while(str[i]!='\0'){
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // or: str[i] = str[i] - 32;
        }
        
        i++;
    }
    int n = 0;
    while (str[n]!='\0')
    {
        cout<<str[n];
        n++;
    }
    
     


}
void ConvertToLC(char str[],int size){
    

    int i = 0;
    while(str[i]!='\0'){
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - ('A' - 'a'); // or: str[i] = str[i] - 32;
        }
        
        i++;
    }
    int n = 0;
    while (str[n]!='\0')
    {
        cout<<str[n];
        n++;
    }
    
     


}

int main(){

  char str[50];
  cin.getline(str,50);
  ConvertToLC(str,50);

}
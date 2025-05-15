#include<iostream>
#include<cstring>
using namespace std;

int main(){

    string str = "Hello";

    char strarr[] ="this my string";

    char c1 = 'l';
    char c2 = 'x';

    for(int i = 0 ;i<str.length();i++){

        if(str[i]=='l'){
            str[i] = c2;
        }

    }
    cout<<str;

}
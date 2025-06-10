// 235. Reverse Vowels of a String

#include<iostream>
using namespace std;


bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
string ReverseVowelsOnly(string str){
      int s  =  0;
      int e = str.length()-1;

      while(s<=e){
        if(!isVowel(str[s])){
            s++;
        }
        else if(!isVowel(str[e])){
            e--;
        }else{
            char temp = str[s];
            str[s] = str[e];
            str[e] = temp;

            s++;
            e--;
            
        }
      }
      return str;
}

int main(){
    string s = "hello";
    cout<< ReverseVowelsOnly(s);
}
#include<iostream>
#include<vector>
using namespace std;
bool isValidChar(char c){
    if(c >='0' && c <='9')
    {
        return true;
    }
    if(c >= 'A' && c <= 'Z'){
        return true;
    }
    if(c >= 'a' && c <= 'z'){
        return true;
    }
    return false;
}

string NormalizeStr(string str){
    string newStr = "";
    for(int i =0 ;i<str.length();i++){
        // cout<<str[i]<<"hi"<<endl;
        char ch = str[i];
        if(isValidChar(ch)){
            // char c;
            if(ch>='A' && ch<='Z'){
                 ch = ch - 'A'+'a';
            }
            newStr.push_back(ch);
        }
    }
    return newStr;
}

bool CheckValidPalindrom(string newStr){
    int i = 0;
    int j = newStr.length()-1;

    cout<<"POS OF J"<< newStr[j]<<endl;

    while (i<j)
    {
        if(newStr[i]!=newStr[j]){
            return false;
        }else{

            i++;
            j--;
        }
    }
    return true;
}

int main(){
    
    //majdori Question
    string str = "A man, a plan, a canal: Panama";
    string Normal = NormalizeStr(str);

    cout<<Normal<<endl;
    bool Plindrom = CheckValidPalindrom(Normal);


    

    cout<<"THIS IS MY STR--->"<< Plindrom;


}

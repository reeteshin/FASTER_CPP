#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool validBraket(stack<char> st,string s){
    char ch;

    for(int i = 0 ;i<s.length();i++){
        ch = s[i];
        if(ch=='{'|| ch =='['|| ch == '('){
            st.push(ch);
        }else{
            if(st.empty()){
                cout<<"EMPTY STACK CASE 1"<<endl;
                return false;
            }else if(ch=='}'&& st.top()=='{'){
                st.pop();
            }else if(ch==')'&& st.top()=='('){
                st.pop();
            }else if(ch==']'&& st.top()=='['){
                st.pop();
            }else{
                
                cout<<"FASEL CASE 2";
                return false;
            }
        }
    }

    cout<<"AT THE END IF ANY ELEMNT IN STACK THEN NOT VALID"<<endl;

    cout<<st.empty()<<endl;
    // cout<<st.top()<<endl;
    return st.empty();

}
int main(){


    stack<char> st;
    string s = "{[()]}";

   cout<<validBraket(st,s);


}
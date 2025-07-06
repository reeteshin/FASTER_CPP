#include<iostream>
#include<stack>

using namespace std;
bool RedundantBracket(stack<char> &st,string s){
//will submit later on gfg
//as revision questions
    
    bool isFound = false;
    for(int i = 0 ;i<s.length();i++)
    {
        char ch = s[i];
        if(ch =='(' || ch =='+'|| ch == '-'||ch=='/'||ch=='*'){
            st.push(ch);
        }else if(ch==')'){
           isFound = false;
           while(!st.empty()&& st.top()!='('){
                char t = st.top();
                st.pop();
                if(t=='/'|| t=='*'||t=='-'||t=='+'){
                    isFound = true;
                }
           }
           if(!st.empty()){
             st.pop();
           }
           if(!isFound){
            return true;
           }

        }

    }
    return false;

}
int main(){

    // string s ="((a+b))";
    string s = "((a+(b*c))+((d/e)))";
    stack<char> st;


    if(RedundantBracket(st,s)){
        cout<<"YES REDUNDENT "<<endl;
    }else{
        cout<<"NO REDUNDENT"<<endl;
    }

    // while(!st.empty()){
    //     cout<<st.top()<<endl;
    //     st.pop();
    // }



}
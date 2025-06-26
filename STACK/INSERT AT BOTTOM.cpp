#include<iostream>
#include<stack>

using namespace std;

//Given int data we have to insert the 
//at the bottom of the stack

//this one using recutrtion
void Print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    // for(int i =0 ;i<s.size();i++){
    //     cout<<s<<endl; // we can not use this
    // }
}
void InsertIt(stack<int> &s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int store = s.top();
    s.pop();
    InsertIt(s,value);
    s.push(store);

}

int main(){


    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    InsertIt(s,3);
    Print(s);



    



}
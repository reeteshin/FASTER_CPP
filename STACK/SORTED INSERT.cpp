#include<iostream>
#include<stack>
using namespace std;
void insertSorted(stack<int> &s,int val){

    if(s.empty()|| (!s.empty() && s.top()<val)){
        s.push(val);
        return;
    }
    int store = s.top();
    s.pop();
    insertSorted(s,val);
    s.push(store);
}

// with the help of this we can put element in stack
// in a sorted manner
int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    int element =15;
    insertSorted(s,element);


   
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
 

}
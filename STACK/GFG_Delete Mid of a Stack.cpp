#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &s,int mid,int &count){
    if(s.empty()){
        return;
    }
    int save = s.top();
    s.pop();
    solve(s,mid,count);
    count++;
    if(count!=mid){
        s.push(save);
    }
}
int main(){

    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    // cout<<"MID"<<(s.size()+1)/2<<endl;
    int mid = (s.size()+1)/2;
    // cout<<s.top();
    int count = 0;
    solve(s,mid,count);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<"count"<<count<<endl;


}
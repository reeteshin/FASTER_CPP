#include<iostream>
using namespace std;
#include<queue>

int main(){

    queue<int> q;

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    //this logic is pop the element
    for(int i = 0 ;i<q.size()-1;i++){ // reversing the queue
        int top = q.front();
        q.pop();
        q.push(top);
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<q.size()<<endl;

}

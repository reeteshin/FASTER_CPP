#include<queue>
#include<iostream>
using namespace std;

int main(){

  priority_queue<int, vector<int>,greater<int>> q;// min heap 
  priority_queue<int> maxHeap;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);

  cout<<"Size --> "<<q.size()<<endl;


  while(!q.empty()){
    cout<<q.top()<<endl;
    q.pop();
  }
//   for(int i = 0 ;i<q.size();i++){
//     cout<<q.top()<<endl;
//     q.pop();
//   }




}
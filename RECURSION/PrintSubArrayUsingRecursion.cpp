#include<iostream>
#include<vector>
using namespace std;


void PrintArray(vector<int> v,int start,int end){
    //base case
    if(end>v.size())return;

    //one case
    for(int i = start ;i<end;i++){
        cout<<v[i];
    }
    cout<<endl;
    //rest for recursion
    PrintArray(v,start,end+1);
}

int main(){

    vector<int> v = {1,2,3,4,5};
    for (int i = 0; i < v.size(); i++)
    {
        PrintArray(v,i,0);
        /* code */
    }
    



}
#include<iostream>
#include<vector>

using namespace std;
int sum(vector<int> num,int n){
  
    cout<<num[n]<<endl;
    if(n==0)return num[n];
    return num[n] + sum(num,n-1);

    // return ArraySum;
}
int main(){

    vector<int> num = {1,2,3,4,5};

    int n = num.size()-1;

    cout<<sum(num,n)<<endl;





}
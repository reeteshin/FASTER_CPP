#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5};

    int n = v.size();

    vector<int> ssum(n,0);
    vector<int> psum(n,0);

    for(int i = 0 ;i<n;i++){
        psum[i ] = psum[i-1] + v[i-1]; ; //think what we have to pull int i+1 index
        //by doing the sum of current index psum[i]+v[i]
    }
    ssum[n] = 0; 
    for(int i = n-2;i>=0;--i){
        ssum[i] = ssum[i+1]+v[i+1];
    }

    

    for(int k : psum){
        cout<<k<<endl;
    }

}
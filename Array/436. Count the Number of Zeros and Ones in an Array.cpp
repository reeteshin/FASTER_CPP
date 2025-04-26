#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,1,1,0,0,0,0};

    int countZero = 0;
    int countOne  = 0;

    for(int i = 0 ;i<arr.size();i++){
        if(arr[i]==0){
            countZero++;
        }else{
            countOne++;
        }
    }

}
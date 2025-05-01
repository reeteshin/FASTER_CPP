#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1 , 4,3,9,1};
     
    //BF
    int target = 2;
    int s = arr.size();
    for(int i = 0;i<s;i++){
        for(int j = i+1;j<s;j++){
            if(target ==arr[i]+arr[j]){
                cout<<i<<"--"<<j<<endl;
            }
        }
    }
    

}
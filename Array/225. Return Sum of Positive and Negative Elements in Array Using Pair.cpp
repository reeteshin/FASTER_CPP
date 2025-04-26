#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {-12,-1,2,4,1};

    int negSum = 0;
    int posSum = 0;

    for(int i = 0 ;i<arr.size();i++){
        if(arr[i]<0){
            negSum = negSum+arr[i];
        }else{
            posSum = posSum+arr[i];
        }
    }
    cout<<"NEG - "<<negSum<<endl;
    cout<<"POSSUMN - "<<posSum<<endl;
}
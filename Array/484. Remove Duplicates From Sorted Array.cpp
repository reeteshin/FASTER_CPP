#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    //jum[p] and override :)
    vector<int> arr = {1,1,2};

    int i =0;
    int j = i+1;
    int n = arr.size()-1;
    int k = 0;
    //we have to return the sorted array size that`s it
    while(i!=n&& j<=n){
        if(arr[i]==arr[j]){
            j++;
        }else{
            i++;
            arr[i] = arr[j];//if we not found any duplicate then
            // we will inclrease the i then we will overlap the i th position
            j++;
        }
        k = i;
    }
    for(int k : arr){
        cout<<k<<endl;
    }
    cout<<"K value"<< k<<endl;
    

   
}
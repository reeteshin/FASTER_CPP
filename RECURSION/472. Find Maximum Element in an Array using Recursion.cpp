#include<iostream>
#include<vector>
#include<climits>
using namespace std;


int MAXIMUM(vector<int> arr,int inx,int &maxi){

    if(inx == arr.size())return arr[0];

    cout<<"RECURSION CALL"<<arr[inx]<<endl;
    // if(arr[inx]>maxi){
    //     maxi = arr[inx];
    // }
     maxi = max(maxi,arr[inx]);

     MAXIMUM(arr,inx+1,maxi);


}


int main(){


    vector<int> arr = {10,20,5,15};

    int n = 0;
    int size = arr.size();
    int max = INT_MIN;
    
    MAXIMUM(arr,n,max);

    cout<<"MAXIMUS FROM MAIN"<<endl <<max<<endl;





}
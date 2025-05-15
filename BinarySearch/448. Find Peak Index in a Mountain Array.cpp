#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> mountainarr = {1,2,3,4,5,6,3,2};

    int n = mountainarr.size();

    int start = 0;
    int end = n-1;
    int ans=0;

    while(start<=end){
        int mid = start+(end-start)/2;

        if(mountainarr[mid]<mountainarr[mid+1]){ //we have to find which 
            //that big element can be in array
            start = mid+1;
        }else{
            ans = mid;
            end = mid-1;
        }
    }

    cout<<"ans index   >>  "<<ans<<endl;

}
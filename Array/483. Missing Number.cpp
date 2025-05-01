#include<iostream>
#include<vector>

using namespace std;

int main(){
    //WE HAVE TWO METHOD FOR SOLVING THIS PROBLEM
    //sum method need be trid
    //this is xor operation 



    int a = 2; // 0010
    int b = 3; // 0011
    int result = a ^ b;
    cout << result << endl;


    vector<int> arr = {1,0,3};

    int n = arr.size();
    int ans = 0 ;
    for(int i = 0 ;i<n;i++){ // check unique element in array
        ans = ans^arr[i];
    }

    cout<<"ans"<<ans<<endl;

    for(int i = 0 ;i<=n;i++){ // check range o to n
        ans = ans^i;
    }
    cout<<ans;
}
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    //lats do rotate an array
    int k = 3;
    // reverse(arr.begin(),arr.end());
    // reverse(arr.begin()+k,arr.end());
    // reverse(arr.begin(),arr.end()-k);

    // reverse(arr.begin(), arr.end());
    // reverse(arr.begin(), arr.begin() + k);
    // reverse(arr.begin() + k, arr.end());
    for(int n : arr){
        cout<<n<<" ";
    }
}
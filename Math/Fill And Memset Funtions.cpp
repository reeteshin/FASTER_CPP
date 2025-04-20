#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr(10);
    // int arr[];
    // fill(arr,arr+10,50);
    cout<<arr.size()<<endl;

    for(int i : arr){
        cout<<i<<endl;
    }
}
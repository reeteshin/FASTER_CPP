#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr = {5,6,8,9,4,7};
    sort(arr.begin(),arr.end());
     
    int sum = 0;

    for(int i = arr.size()-1 ;i>=0;i--){
        cout<<arr[i]<<"---->"<<sum<<endl;
        sum = sum*10+arr[i];

    }
    cout<<sum<<endl;
}
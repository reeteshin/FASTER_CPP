#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;


void BruteForceMethod(vector<int> arr,int n){
    double maxSum = INT_MIN;
    int len = 4;




    for(int i = 0;i<n;i++){
        for(int j = i;j<n;j++){
            double sum = 0;
            for(int k = i;k<=len;k++){
                sum = sum+arr[k];
                cout<<arr[k]<<" -> ";
            }
            if(maxSum<sum){
                maxSum = sum;
            }
            cout<<endl;
        }
    }

    cout<<"the max sum"<<(maxSum/len)<<endl;
}

int main(){

    //do i know how to find subarray
    //formula of sub array

    vector<int> arr = {1,12,-5,-6,50,3};

    int n = arr.size();

    //Optimal is pending 
    //using sliding window
   


}

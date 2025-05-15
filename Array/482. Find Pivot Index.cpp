#include<iostream>
#include<vector>

using namespace std;


int BruteForceMethod(vector<int> arr,int n){
    int j = 0;

    while(j<n){

        int leftSum = 0;
        int rightSum = 0;

        for(int  i = 0;i<j;i++){
            leftSum = leftSum+arr[i];
        }
        
        for(int i = j+1;i<n;i++){
            rightSum = rightSum+arr[i];
        }

        if(leftSum == rightSum)return j; // we will return before increment

        j++;

        cout<<"lsum - > "<<leftSum<<" right sum - > "<<rightSum <<endl;

    }
    return -1;
    
}

int main(){
    vector<int> arr = {1,7,3,6,5,6};
    int n = arr.size();

    int res =  BruteForceMethod(arr,n);

    cout<<"Result > -- "<<res<<endl;


}
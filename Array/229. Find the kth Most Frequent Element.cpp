#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

//check question 231. Identify Elements with Highest and Lowest Frequency Separately
void IFArrayisNotSorted(vector<int> arr,int k){
    int n = arr.size();
    vector<int> boolarr{false,n};

    int maxcount = 0;
    int MaxEelement = -1;
    
    for(int i = 0 ;i<n;i++){
        int count = 1;
        int current = arr[i];
        if(boolarr[i]) continue;
        for(int j = i+1;j<n;j++){
            if(current==arr[j]){
                count++;
                boolarr[j] = true;
            }
        }
        boolarr[i] = true;
        if(count==k){
            maxcount = count;
            MaxEelement = current;

        }
       
    }

 cout << "MaxFrequnce" <<MaxEelement<<endl;
   
}
int main() {

    vector<int> arr = {4, 4, 1, 2, 2};
    int k = 2;
    IFArrayisNotSorted(arr,k);
 
  return 0;
}
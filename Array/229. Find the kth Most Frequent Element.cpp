#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


//will try another saolution 
// and i need to revise the map 

//check question 231. Identify Elements with Highest and Lowest Frequency Separately
// void IFArrayisNotSorted(vector<int> arr,int k){
    // int n = arr.size();
    // vector<int> boolarr{false,n};

    // int maxcount = 0;
    // int MaxEelement = -1;
    
    // for(int i = 0 ;i<n;i++){
    //     int count = 1;
    //     int current = arr[i];
    //     if(boolarr[i]) continue;
    //     for(int j = i+1;j<n;j++){
    //         if(current==arr[j]){
    //             count++;
    //             boolarr[j] = true;
    //         }
    //     }
    //     boolarr[i] = true;
    //     if(count==k){
    //         maxcount = count;
    //         MaxEelement = current;

    //     }
       
    // }

//  cout << "MaxFrequnce" <<MaxEelement<<endl;
   
// }

int findMostFrequanceElement(vector<int> &arr,int k,int &ans){

    int max = *max_element(arr.begin(),arr.end());
    vector<int> l(max + 1, 0);;
    for(int i = 0 ;i<arr.size();i++){
        l[arr[i]]++;
    }
    // for(int i : l){
    //     cout<<i<<endl;
    // }
     for(int i = 0 ;i<l.size();i++){
        if(l[i]!=0){
             if(k == i){
            return i; 
        }
        cout<<i<<"The frequance - > "<<l[i]<<endl;
        }
    }
    return ans;

}
int main() {

    vector<int> arr = {1, 1, 2, 2, 3};
    // vector<int ,int> map;
    int k = 2;
    int ans = 0;
    cout<<findMostFrequanceElement(arr,k,ans);
 
  return 0;
}
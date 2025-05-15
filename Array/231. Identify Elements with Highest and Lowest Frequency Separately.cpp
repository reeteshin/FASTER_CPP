#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;


void CountingIfArrayIsSorted(vector<int> arr){
    int minfreq = INT_MAX;
    int maxfreq = INT_MIN;
  
    int MaxElement = 0;
    int MinElement = 0; 
  
    int n = arr.size();
    int i = 0;
    sort(arr.begin(),arr.end());
    while(i<n){
      int currentElement = arr[i];
      int count= 0;
  
      //cout<<currentElement<<i<<endl;
  
      while(arr[i]==currentElement&&i<n){
        count++;
        i++;
      }
  
      if(count>maxfreq){
        maxfreq = count;
        MaxElement =currentElement;
      }
      if(count<minfreq){
        minfreq = count;
        MinElement = currentElement;
      }
    }
  
    cout << "MaxFrequnce" <<maxfreq<<" -> "<< MaxElement<<endl;
    cout << "MinFrequnce" <<minfreq<<" -> "<< MinElement<<endl;
}

void IFArrayisNotSorted(vector<int> arr){
    int n = arr.size();
    vector<int> boolarr{false,n};

    int maxcount = 0;
    int mincount = INT_MAX;
    
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
        if(count>maxcount){
            maxcount = count;
        }
        if(count<mincount){
            mincount = count;
        }
    }

 cout << "MaxFrequnce" <<maxcount<<endl;
    cout << "MinFrequnce" <<mincount<<endl;
}
int main() {

    vector<int> arr = {10,10,10,20,20,30};
    IFArrayisNotSorted(arr);
 
  return 0;
}
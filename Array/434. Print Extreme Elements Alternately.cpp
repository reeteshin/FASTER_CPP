#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// To achieve this, you will first sort the array.
// Then you will begin with the smallest element,
// followed by the largest, then the next smallest,
// and continue this pattern until all elements are printed.
int main(){
    
    vector<int> arr = {1, 3, 2, 4, 5};
    vector<int> val;
     //shoted the array
    sort(arr.begin(),arr.end());
  
    //next we will use two pointer
    int start = 0;
    int end = arr.size()-1;
    
    while(start<=end){
        if(start==end){//if start and end 

            val.push_back(arr[start]);
        }else{

            val.push_back(arr[start]);
            val.push_back(arr[end]);
        }

        start++;
        end--;
    }


    for(int q : val){
        cout<<q<<endl;
    }


}
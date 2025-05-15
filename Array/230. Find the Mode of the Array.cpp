#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Explanation: The numbers 3 and 1 both appear twice,
// but 1 is smaller than 3, so 1 is the mode.
 

// it will use map 
// till now its pending

//another method we can sort the array, can count the number
int main(){

    // vector<int> arr  = {3, 3,3, 2, 1, 5, 1};
    vector<int> arr={-2, -2, -2, -1, -1, -1};// this case i forgot to sort in red dashboard
    sort(arr.begin(),arr.end());

    int count = 1;
    int maxF = 1;
    int element = arr[0];

    for(int i = 1;i<arr.size();i++){
            if(arr[i]==arr[i-1]){
                count++;

            }else{
                count = 1;
            }
            if(count>maxF){
                maxF = count;
                element = arr[i-1];
            }
    }
    cout<<element<<endl;

}

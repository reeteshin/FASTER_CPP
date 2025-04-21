#include<iostream>
#include<vector>
using namespace std;


// this program handle reverse of vector
int main(){
    vector<int> arr={1,2,3,4,5};
    int i = 0;
    int j = arr.size()-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int n : arr){
        cout<<n<<endl;
    }
}
 
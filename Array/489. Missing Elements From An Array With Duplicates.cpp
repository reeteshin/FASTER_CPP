#include<iostream>
#include<vector>
using namespace std;


vector<int> FindMissing(vector<int> v,int n){
    //this is optimal solution
    vector<int> arr = v;
    vector<int> ans;
    // int n = arr.size();
    
    for(int i = 0;i<n;i++){
        int index = abs(arr[i]);

        if(arr[index-1]>0){
            arr[index-1] *= -1;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
        if(arr[i]>0){
            ans.push_back(i+1);
        }
    }

 return ans;
}

int main(){

    // vector<int> arr  = {4,3,2,7,8,2,3,1};
    vector<int> arr ={2,2,2,2};
    int n = arr.size();


    //cout<<"Missing element array size > = "<<n<<endl;
     
    vector<int>  res=  FindMissing(arr,n);

    //cout<<res.size();
    // for(int i = 0;i<res.size();i++){
    //     cout<<res[i]
    // }
    cout<<"Minus element over here"<<"\n";
    for(int k : res){
        cout<<k<<endl;
    }

}
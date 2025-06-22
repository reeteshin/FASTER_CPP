#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> a1 = {1,2,3,0,0,0};
    vector<int> a2 = {2,5,6};
    vector<int> ans;

    int m = 3;
    int n = 3;

    // ans [1,2,2,3,5,6]
    //lets take tow pointer that will point 
    //to both array

    int i = 0;
    int j = 0;

    while(i<m&&j<n){

        if(a1[i]<a2[j]){
            ans.push_back(a1[i]);
            i++;
        }else{
            ans.push_back(a2[j]);
            j++;
        }

        // i++,j++;


    }
    while(i<m){
        ans.push_back(a1[i]);
        i++;
    }

     while(j<n){
        ans.push_back(a2[j]);
        j++;
    }

    a1 = ans;

    for(int l = 0 ;l<a1.size()-1;l++){
        cout<<a1[l]<<endl;
    }
   

}
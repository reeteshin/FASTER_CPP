//done on red question submitted


#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


vector<int> FindAllDuplicate(vector<int> a){

    unordered_map<int,int> map;
    vector<int> ans;

    for(int i = 0 ;i<a.size();i++){
        map[a[i]]++;
    }

    for(auto ip : map){
        if(ip.second>=2){
            ans.push_back(ip.first);
            cout<<ip.first<<"-->"<<ip.second<<endl;
        }
    }

    return ans;


}

int main(){

    // find all duplicate in a array
    vector<int> a = {4,3,2,7,8,2,3,1};
    vector<int> ans;
    // FindAllDuplicate(a);



        for (int i = 0, n = a.size(); i < n; ++i) {
            int idx = abs(a[i]) - 1;
            cout<<"idx"<<a[idx])<<endl;
            if (a[idx] < 0) ans.push_back(abs(a[i]));
            else a[idx] *= -1;
        }
    for(auto i : ans){
        cout<<i<<endl;
    }



}

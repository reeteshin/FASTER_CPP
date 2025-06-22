#include<iostream>
#include<vector>
using namespace std;


void LETSPERMUTE(vector<vector<int>> &ans,vector<int> &a,int i ){
    if(i>=a.size()){
        // for(int k : a)cout<<k<<endl;
        ans.push_back(a);

        return;
    }
    for(int j = i ;j<a.size();j++){
        swap(a[i],a[j]);
        LETSPERMUTE(ans,a,i+1);
        swap(a[i],a[j]);
    }
}

int main(){

    vector<vector<int>> ans;
    vector<int> a = {1,2,3};



    int i = 0;
    LETSPERMUTE(ans,a,i);

    int row = ans.size();
    int col = ans[0].size();

    for(int i = 0 ;i<row;i++){
        for(int j = 0 ;j<col;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }

    cout<<row<<endl<<col<<endl;

    


}
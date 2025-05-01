#include<iostream>
#include<vector>
using namespace std;

 int main(){
    vector<vector<int>> mat ={
        {1, 2, 3, 4},
         {5, 6, 7, 8},
          {9, 10, 11, 12}
        };
    
    // int col = mat.size();
    // int row = mat[0].size();


    int row = mat.size();
    int col = mat[0].size();
    
    cout<<"row :--"<<row<<endl;
    cout<<"column :--"<<col<<endl;

    for(int i = 0;i<col;i++){

        if((i%2)==0){
            for(int j = 0;j<row;j++){
                cout<<mat[j][i]<<" ";
            }
        }else{
            for(int j = row-1;j>=0;j--){
                cout<<mat[j][i]<<" ";
            }
        }
     
        // cout<<endl;
    }


 }
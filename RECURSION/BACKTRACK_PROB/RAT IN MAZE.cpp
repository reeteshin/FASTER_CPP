#include <iostream>
#include <vector>
#include <string>

using namespace std;
bool isSafe(){

}
void solve(char arr[3][3],int col,int row,int srcX,int srcY,int desX,int desY,string output,bool visited[][3]){

    if(srcX==desX && srcY == desY){
        cout<<output;
        return ;
    }

    int newX = srcX-1;
    int newY = srcY;
    if(isSafe()){
        visited[newX][newY] = true;
    }


}

int main()
{
 char arr[3][3] = {
        {'.', '.', '.'},
        {'.', '.','-',},
        {'.', '.', '.'},
    };

    int row = 3;
    int col = 3;
    int srcX = 0;
    int srcY = 0;
    int desX = row-1;
    int desY = col-1;
    string output ;

    bool visited[][3]={
        {true,false,false,},
        {false,false,false},
        {false,false,false}
};

    solve(arr,col,row,srcX,srcY,desX,desY,output,visited);

}
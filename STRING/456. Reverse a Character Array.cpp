#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){
    vector<char> carr ={'h', 'e', 'l', 'l', 'o'};

    int start = 0;
    int end = carr.size()-1;

    while(start<=end){
        // 
        char temp = carr[start];
        carr[start] = carr[end];
        carr[end] = temp;
        start++;
        end--;
    }

    int i = 0;
    while (i!=carr.size())
    {
        cout<<carr[i]<<endl;
        i++;
    }
    


}
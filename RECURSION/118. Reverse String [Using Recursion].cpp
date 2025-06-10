#include<iostream>
#include<string>
#include<vector>
using namespace std;


void ReverseUsing(vector<char> &str,int start,int end) {

    if(start>=end)return;

    cout<<start<<end<<endl;
    // cout<<str[start]<<endl;
    swap(str[start],str[end]);
    
    ReverseUsing(str,start+1,end-1);

}

int main(){

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    int start = 0 ;
    int end = s.size()-1;

   

    cout<<s[start]<<endl;

    ReverseUsing(s,start,end);


    // while(start<end){
    //     swap(s[start],s[end]);
    //     start++;
    //     end--;
    // }


    for(int i = 0 ;i<s.size();i++){
        cout<<s[i]<<endl;
    }

   


}
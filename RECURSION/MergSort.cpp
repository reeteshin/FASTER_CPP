#include<iostream>
#include<vector>
using namespace std;

void merge(string s,int left,int mid,int right){
    string s1 = s.substr(left,mid-left+1);
    string s2 = s.substr(mid,right);

    cout<<s1[left]<<endl;
    cout<<s1[mid]<<endl;
    cout<<s2[right]<<endl;
}
void mergeSort(string &s,int left,int right){

     if (left >= right)
        return;

        
    int mid = left + (right - left) / 2;
    // cout<<s[mid];
    mergeSort(s, left, mid);
    mergeSort(s, mid + 1, right);
    merge(s,left,mid,right);
}
// PENDING TILL NOW
int main(){

    string s = "meena";
    int left = 0;
    int right = s.length()-1;
    mergeSort(s,left,right);
    cout<<"sotred"<<endl << s<<endl;

}
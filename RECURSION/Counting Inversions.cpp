#include <iostream>
#include<vector>
using namespace std;

int BfCountInversion(vector<int> a){
    int count = 0;
    for(int i = 0 ;i< a.size();i++){
        for(int j = i+1;j<a.size();j++){
            if(a[i]>a[j]){
                count++;
            }
        }
    }
    return count;
}




void mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right,int &globalInvCount) {
    int i = left, j = mid + 1, k = left;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            globalInvCount += (mid - i + 1);
        }
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    for (int p = left; p <= right; ++p) arr[p] = temp[p];
}

void mergeSortAndCount(vector<int>& arr, vector<int>& temp, int left, int right,int &globalInvCount) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSortAndCount(arr, temp, left, mid,globalInvCount);
        mergeSortAndCount(arr, temp, mid + 1, right,globalInvCount);
        mergeAndCount(arr, temp, left, mid, right,globalInvCount);
    }
}

int main() {
    vector<int> arr = {3, 2, 1};
    vector<int> temp(arr.size());
    int globalInvCount = 0;

    mergeSortAndCount(arr, temp, 0, arr.size() - 1,globalInvCount);
    cout << "Inversion count: " << globalInvCount << endl;
    return 0;
}


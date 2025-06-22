#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseD(vector<int> &nums, int start, int end)
{
    int i = start;
    int j = end;
    while (i < j)
    {
        swap(nums[i], nums[j]);
        j--, i++;
    }
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int i = 0;
    int j = nums.size() - 1;
    reverseD(nums, i, j);
    for (int i : nums)
    {
        cout << i;
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 4, 3, 9, 1};

    // BF
    int target = 2;
    vector<int> ans;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        // int sum = ;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout << i << j << endl;
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
   
}

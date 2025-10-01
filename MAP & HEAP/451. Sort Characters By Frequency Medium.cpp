
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

// #pending
 bool compare(pair<char, int> & a, pair<char, int> & b)
    {
        return a.second > b.second;
    }
int main()
{

    map<char, int> map;
    string s = "raaeaedere";
    for (int i = 0; i < s.length(); i++)
    {
        map[s[i]]++;
    }

    vector<pair<char, int>> ve(map.begin(), map.end());
   
    sort(ve.begin(), ve.end(), compare);

    string result = "";
    for (auto it : ve)
    {
        cout << it.second << "-->" << it.first << endl;
        result += string(it.second, it.first); // repeat char 'first' 'second' times
    }

    cout << "Formed string: " << result << endl;
}
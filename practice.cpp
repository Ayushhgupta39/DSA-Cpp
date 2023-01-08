#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1,2,2,3,3,4,5,5,6,6,7};
    vector<int> org;
    unordered_map<int, int> elem;
    for (auto i : nums)
    {
        elem[i]++;
    }
    unordered_map<int, int>::iterator itr;
    for (itr = elem.begin(); itr != elem.end(); itr++)
    {
        org.push_back((*itr).first);
    }
    for (auto i : org)
    {
        cout << i << " ";
    }
    return 0;
}
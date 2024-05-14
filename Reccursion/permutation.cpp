#include <bits/stdc++.h>
using namespace std;
// #include<map>
// #include
vector<vector<int>> allpermutation(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, vector<bool> &hs)
{
    int sz = hs.size();
    if (a.size() == nums.size())
    {
        ans.push_back(a);
    }
    else
        for (int i = 0; i < sz; i++)
        {
            if (!hs[i])
            {
                hs[i] = true;
                a.push_back(nums[i]);
                allpermutation(nums, a, ans, hs);
                hs[i] = false;
                a.pop_back();
            }
        }
    return ans;
}
vector<vector<int>> permute(vector<int> &nums)
{
    int sz = nums.size();
    vector<bool> hs(sz);
    vector<vector<int>> ans;
    vector<int> a;
    return allpermutation(nums, a, ans, hs);
}

int main()
{
    int size;
    cout << "Number of elements you want to enter : ";
    cin >> size;
    vector<int> comb(size);
    vector<vector<int>> ans;
    cout << "Enter the combination : ";
    for (int i = 0; i < size; i++)
        cin >> comb[i];
    cout << "combinations are : \n";
    ans = permute(comb);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}
// 8 1 2 3 4 5 6 7 8

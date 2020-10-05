#include<bits/stdc++.h>
using namespace std;
vector<int> decompressLength(vector<int> &nums)
{
    vector<int> ans;
    int n = nums.size();
    int f = n/2;
    for(int i = 0; i < f; i++)
    {
        for(int j = 0; j < nums[2*i]; j++)
        {
            ans.push_back(nums[2*i+1]);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans = decompressLength(nums);

    for(auto i : ans)
    {
        cout << i << " ";
    }
}

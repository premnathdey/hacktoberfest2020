#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>&nums,int target)
{
    if(nums.size()< 4)return {};
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i = 0; i < nums.size()-3; i++)
    {
        if(i>0 && nums[i]==nums[i-1])continue;
        for(int j = i+1; j < nums.size()-2; j++)
        {
            if(j > i+1 && nums[j]==nums[j-1])continue;
            int l = j+1;
            int r = nums.size()-1;
            while(l<r)
            {
                int sum1 = nums[i]+nums[j];
                int sum2 = nums[l]+nums[r];
                if(sum1+sum2==target)
                {
                    ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1])l++;
                    while(l<r && nums[r]==nums[r-1])r--;
                    l++;
                    r--;
                }
                else if(sum1+sum2 < target)
                {
                    l++;
                }
                else{
                    r--;
                }
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i <n ; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin>>target;
    vector<vector<int>> res = fourSum(nums,target);
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
}

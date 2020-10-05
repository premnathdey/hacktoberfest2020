#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	int threeSumClosest(vector<int>&v,int target)
	{
		int n = v.size();
		int diff = INT_MAX;
		sort(v.begin(),v.end());
		for(int i = 0; i < n && diff!=0; ++i)
		{
			int l = i+1, r = n-1;
			while(l < r)
			{
				int res = v[i]+v[l]+v[r];
				if(abs(target-res) < abs(diff))
				{
					diff = target-res;
				}
				if(res < target)
				{
					++l;
				}
				else{
					--r;}
			}
		}
		return target-diff;
	}
};
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i =0; i < n; i++)
	{
		cin >> v[i];
	}
	int target;
	cin >> target;
	Solution obj;
	cout << obj.threeSumClosest(v,target);
}

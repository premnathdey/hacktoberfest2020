#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	string s;
	Solution(string y){
		this->s = y;
	}
	string findlpalsubstring(){
		int maxlen = 0, n = s.size();
		if(n==0)
		{
			return "";
		}
		vector<vector<bool>> dp(n,vector<bool>(n,false));
		string ans = "";
		for(int i = 0; i < n; i++)
		{
			dp[i][i] =true ;
		}
		for(int i = n -1; i>=0; i--)
		{
			for(int j = i ; j < n; j++)
			{
				if(s[i]==s[j] && i!=j)
				{
					if(j==i+1)
					{
						dp[i][j] = true;
					}
					else
					{
						dp[i][j] = dp[i+1][j-1];
					}
				}
				if(dp[i][j] && (j-i+1) > ans.length())
				{
					ans = s.substr(i,j-i+1);
				}
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(dp[i][j])
				{
					cout << "T ";
				}
				else
				{
					cout << "F ";
				}
			}
			cout << endl;
		}
		return ans;
	}
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("Input.txt","r",stdin);
		freopen("Output.out","w",stdout);
	#endif
	int t = 2;
	while(t--)
	{
		string a;
		cin >> a;
		Solution prob = Solution(a);
		cout << prob.findlpalsubstring() << "\n";
	}
}
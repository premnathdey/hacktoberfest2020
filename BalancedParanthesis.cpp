#include<bits/stdc++.h>
using namespace std;
void solve()
{
	stack <char> S;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); ++i)
	{
		if(S.empty())
		{
			S.push(s[i]);
		}
		else
		{
			if((S.top()=='(' && s[i]==')') || (S.top()=='[' && s[i]==']') || (S.top()=='{' && s[i]=='}'))
			{
				S.pop();
			}
			else
			{
				S.push(s[i]);
			}
		}
	}
	if(S.size()==0)
	{
		printf("balanced\n");
	}
	else
	{
		printf("not balanced\n");
	}

}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("Input.txt","r",stdin);
		freopen("Output.out","w",stdout);
	#endif
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	vector<string> LetterCombinations(string s)
	{
		if(s.size()==0)
		{
			return vector<string>();
		}
		int n = s.size();
		vector<string> HashMap{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
		vector<string> res;
		res.push_back("");
		for(int i = 0; i < n; i++)
		{
			int num = s[0]-'0';
			if(num<=1 || num >9)break;
			string curr = HashMap[num];
			vector<string>temp;
			int o = curr.size();
			for(int j = 0; j < o; j++)
			{
				int l = res.size();
				for(int k = 0; k < l; k++)
				{
					temp.push_back(res[k]+curr[j]);
				}
			}
			res = temp;
		}
		return res;
	}
};
int main()
{
	string s;
	cin >> s;
	Solution obj;
	for(auto i : obj.LetterCombinations(s))
	{
		cout << i << " ";
	}
}

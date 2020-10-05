#include <bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define ld long double
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define maxxn 100003
const ll mod = 99999999999;
int dp(int a[], int n,int target)
{
    if(target < 0)
    {
        return mod;
    }
    if(target==0)
    {
        return 0;
    }
    int best = mod;
    for(int i = 0; i < n; i++)
    {
        best = min(best, dp(a,n,target-a[i])+1);
    }
    return best;
}
void mycode()
{
    int n;
   cin >> n;
   int a[n];
   for(int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   int target;
   cin >> target;
   cout << dp(a,n,target);
}
int main()
{
    SPEED
    int t = 1;
  //  cin >> t;
    for(int i=1; i<=t;i++)
    {
        mycode();
    }
    return 0;
}

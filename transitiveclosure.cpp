#include<bits/stdc++.h>
using namespace std;
#define maxn 1000
int n, m;
vector<int> adj[maxn+1];
vector<vector<bool>> tc(maxn , vector<bool>(maxn,false));
void add_edge(int s,int v)
{
    adj[s].push_back(v);
}
void dfsu(int u, int v)
{
    tc[u][v] = true;
    for(vector<int>::iterator it=adj[v].begin();it!=adj[v].end();it++ )
    {
        if(!tc[u][*it])
        {
            dfsu(u,*it);
        }
    }
}
void dfs()
{
    for(int i =0; i < n; i++)
    {
        dfsu(i,i);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout << tc[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int o, p;
        cin >> o >> p;
        add_edge(o,p);
    }
    dfs();
}

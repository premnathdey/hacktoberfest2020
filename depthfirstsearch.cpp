#include<bits/stdc++.h>
using namespace std;
#define maxn 1000
int n, m;
vector<int> adj[maxn+1];
void add_edge(int s, int c)
{
    adj[s].push_back(c);
}
void dfsu(vector<bool>&visit,int src)
{
    visit[src]=true;
    cout << src << " ";
    for(vector<int>::iterator it=adj[src].begin();it!=adj[src].end();it++)
    {
        if(!visit[*it])
        {
            dfsu(visit,*it);
        }
    }
}
void dfs(int src)
{
    vector<bool> visit(n,false);
    for(int i = 0; i < n; i++)
    {
        if(visit[i]==false)
        {
        dfsu(visit,i);
        }
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
    int src;
    cin >> src;
    dfs();
}

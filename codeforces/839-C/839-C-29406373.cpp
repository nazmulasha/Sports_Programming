#include <bits/stdc++.h>

using namespace std;
#define mx 100005
vector<int>adj[mx];
bool visited[mx];
int d[mx];

double dfs(int u)
{
    visited[u]=true;
    int cnt=0;
    double sum=0.0;
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(!visited[v])
        {
            cnt++;
            d[v]=d[u]+1;
            sum+=dfs(v);
        }
    }
    if(cnt==0)
        return (double)d[u];
    else
        return sum/(double)cnt;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(d,0,sizeof(d));
    memset(visited,0,sizeof(visited));
    //queue<int>q;
    //visited[1]=true;
    double ans=dfs(1);
    cout<<fixed<<setprecision(15);
    cout<<ans<<endl;
    return 0;
}
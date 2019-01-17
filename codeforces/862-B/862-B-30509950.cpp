#include <bits/stdc++.h>

using namespace std;
#define mx 100001
vector<int>adj[mx];
bool visited[mx];
long long int d[mx];

void bfs(int x)
{
    d[x]=0;
    queue<int>q;
    q.push(x);
    visited[x]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            int v=adj[u][i];
            if(!visited[v])
            {
                visited[v]=true;
                d[v]=d[u]+1;
                q.push(v);
            }
        }
        visited[u]=true;
    }
}
int main()
{
    memset(visited,0,sizeof(visited));
    memset(d,0,sizeof(d));
    long long int n;
    cin>>n;
  //  vector<int>a,b;
    for(int i=1;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
            bfs(i);
    }
    long long int a=0,b=0;
    for(int i=1;i<=n;i++)
    {
        if(d[i]%2==0)
            a++;
        else
            b++;
    }
    long long int ans=a*b;
    ans-=n;
    ans++;
    cout<<ans<<endl;
    return 0;
}
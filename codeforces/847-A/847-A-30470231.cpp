#include <bits/stdc++.h>

using namespace std;
vector<int>adj[101];
int l[101],r[101];
bool visited[101];
int ans[101][2];
int s=-1,e=-1;
void bfs(int uu)
{
    //cout<<"bfs=="<<uu<<endl;
    //int s,e;
    if(r[uu]==1)
        e=uu;
    if(l[uu]==1)
        s=uu;
    queue<int>q;
    q.push(uu);
    visited[uu]=true;
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
                q.push(v);
               // cout<<v<<endl;
                if(r[v]==1)
                    e=v;
                if(l[v]==1)
                    s=v;
               // cout<<v<<" "<<l[v]<<" "<<r[v]<<endl;
            }
        }
        visited[u]=true;
    }
}
int main()
{
    int n;
    cin>>n;
    memset(ans,0,sizeof(ans));
    memset(l,0,sizeof(l));
    memset(r,0,sizeof(r));
    for(int i=0;i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        if(u!=0){
            adj[u].push_back(i+1);
            adj[i+1].push_back(u);
            ans[i+1][0]=u;
        }
        else
            l[i+1]=1;
        if(v!=0){
            adj[i+1].push_back(v);
            adj[v].push_back(i+1);
            ans[i+1][1]=v;
        }
        else
            r[i+1]=1;
    }

    memset(visited,0,sizeof(visited));
    vector<pair<int,int> > num;
    for(int i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            bfs(i);
           // cout<<s<<" "<<e<<endl;
            num.push_back({s,e});
        }
    }
    for(int i=1;i<num.size();i++)
    {
        int u=num[i].first;
        int v=num[i-1].second;
        ans[u][0]=v;
        ans[v][1]=u;
    }
    for(int i=1;i<=n;i++)
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    return 0;
}
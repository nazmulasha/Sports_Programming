#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstdio>

using namespace std;

#define max 10005
int visited[max],st[max],et[max],ct,cnt,pc[max],rc;
vector <int> adj[max];
vector < pair<int,int> > cp;

void dfs(int start,int f)
{
    int x=start;
    et[x]=ct;
    st[x]=ct;
    ct++;
    visited[x]=1;
    int s=adj[x].size();
    for(int i=0;i<s;i++)
    {
        int y=adj[x][i];
        if(y==f)
            continue;
        if(visited[y]==0)
        {
            if(x==1)
                rc++;
            dfs(y,x);
            if(st[x]<=et[y])
                pc[x]=1;
            et[x]=min(et[x],et[y]);

        }
        else
            et[x]=min(et[x],st[y]);
    }

}
int main()
{
    int m,n;
    while(cin>>n>>m){
        if(n==0&&m==0)
        break;
    for(int i=0;i<max;i++)
    {
        visited[i]=0;
        et[i]=0;
        st[i]=0;
        adj[i].clear();
        pc[i]=0;
    }
    cp.clear();

    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ct=0,cnt=0,rc=0;
    dfs(1,-1);
    if(rc>1)
        pc[1]=1;
    else
        pc[1]=0;
    for(int i=1;i<=n;i++)
        cnt+=pc[i];
   // for(int i=0;i<n;i++)
     //   cout<<st[i]<<" "<<et[i]<<endl;
    cout<<cnt<<endl;
    }
    return 0;
}

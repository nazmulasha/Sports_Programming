#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstdio>
#include <string>
#include <sstream>
using namespace std;
#define max 10005
int visited[max],st[max],et[max],ct,pc[max];
vector <int> adj[max];
int cnt,rc;



void dfs(int start)
{
    int x=start;
    visited[x]=1;
    st[x]=ct;
    et[x]=ct;
    ct++;
    int si=adj[x].size();
    for(int i=0;i<si;i++)
    {
        int tmp=adj[x][i];
        if(visited[tmp]==0)
        {
            if(x==1)
                rc++;
            dfs(tmp);
            if(st[x]<=et[tmp])
                pc[x]=1;
            et[x]=min(et[x],et[tmp]);
        }
        else
            et[x]=min(et[x],st[tmp]);
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(int i=0;i<max;i++)
        {
            et[i]=0;
            st[i]=0;
            visited[i]=0;
            adj[i].clear();
            pc[i]=0;
        }
        int x,y;
        while (cin>>x) {
            if(x==0)
                break;
        char c;
        while ((c=getchar())!='\n')
        {
            cin>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        }
        cnt=0,rc=0,ct=0;
        dfs(1);
        if(rc>1)
            pc[1]=1;
        else
            pc[1]=0;
        for(int i=1;i<=n;i++)
            cnt+=pc[i];

        cout<<cnt<<endl;
    }
    return 0;
}

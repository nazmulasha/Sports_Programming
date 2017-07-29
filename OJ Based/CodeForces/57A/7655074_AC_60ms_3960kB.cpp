#include <bits/stdc++.h>

using namespace std;
#define pii(x,y) make_pair(x,y)
int d[1005][1005];
int main()
{
    for(int i=0;i<1001;i++)
    {
        for(int j=0;j<1001;j++)
        {
            d[i][j]=9999999;
        }
    }
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    queue<pair<int,int> >q;
    q.push(pii(x1,y1));
    d[x1][y1]=0;
    int ans;
    while(!q.empty())
    {
        int x,y;
        x=q.front().first;
        y=q.front().second;
        q.pop();
        if(x==x2&&y==y2)
        {
            ans=d[x][y];
            break;
        }
        if(x+1<=n&&(y==0||y==n))
        {
            if(d[x+1][y]>d[x][y]+1)
            {
                d[x+1][y]=d[x][y]+1;
                q.push(pii(x+1,y));
            }
        }
        if(x-1>=0&&(y==0||y==n))
        {
            if(d[x-1][y]>d[x][y]+1)
            {
                d[x-1][y]=d[x][y]+1;
                q.push(pii(x-1,y));
            }
        }
        if(y+1<=n&&(x==0||x==n))
        {
            if(d[x][y+1]>d[x][y]+1)
            {
                d[x][y+1]=d[x][y]+1;
                q.push(pii(x,y+1));
            }
        }
        if(y-1>=0&&(x==0||x==n))
        {
            if(d[x][y-1]>d[x][y]+1)
            {
                d[x][y-1]=d[x][y]+1;
                q.push(pii(x,y-1));
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,k;
    scanf("%d %d %d",&n,&m,&k);
    unordered_map<int,int>ma,mp;
    int tmp;
    for(int i=0;i<m;i++)
    {

        scanf("%d",&tmp);
        ma[tmp]=1;
    }
    bool ss=false;
    int po=1;
    mp[1]=1;
    int u,v;
    for(int i=0;i<k;i++)
    {

        scanf("%d %d",&u,&v);
        if(!ss)
        {
            if(mp[u])
            {
                if(ma[u])
                {
                    po=u;
                    ss=true;
                    continue;

                }
                mp[u]=0;
                mp[v]=1;
                po=v;
                if(ma[v])
                    ss=true;
                    //cout<<"fd"<<endl;
            }
            else if(mp[v])
            {
                if(ma[v])
                {
                    po=v;
                    ss=true;
                    continue;

                }
                mp[u]=1;
                mp[v]=0;
                po=u;
                if(ma[u])
                    ss=true;
            }
        }
    }
    printf("%d\n",po);
    return 0;
}
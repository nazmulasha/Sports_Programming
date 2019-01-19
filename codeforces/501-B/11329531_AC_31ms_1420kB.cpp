#include <bits/stdc++.h>

using namespace std;
#define mx 1000001
bool isprime[mx];

void sieve()
{
    for(int i=0;i<mx;i++)
        isprime[i]=true;
    isprime[1]=false;
    isprime[0]=false;
    int sq=sqrt(mx);
    for(int i=3;i<=sq;i+=2)
    {
        if(isprime[i])
        {
            for(int j=i+i;j<mx;j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    for(int j=4;j<mx;j+=2)
        isprime[j]=false;
}
int main()
{
    //sieve();
    int tt;
    cin>>tt;
    map<string,int>tmp;
    map<int,string>m;
    vector<int>adj[2001];
    int cnt=1;
    for(int t=1;t<=tt;t++)
    {
        string old,nw;
        cin>>old>>nw;
        int u,v;
        if(tmp[old]==0)
        {
            tmp[old]=cnt;
            m[cnt]=old;
            cnt++;
        }
        if(tmp[nw]==0)

        {
            tmp[nw]=cnt;
            m[cnt]=nw;
            cnt++;
        }
        u=tmp[old],v=tmp[nw];
        adj[u].push_back(v);
    }
    vector<pair<int,int> >v;
    bool visited[cnt];
    for(int i=0;i<cnt;i++)
        visited[i]=false;
    for(int i=1;i<cnt;i++)
    {
        if(!visited[i])
        {
            stack<int>st;
            st.push(i);
            visited[i]=true;
            int u;
            while(!st.empty())
            {
                u=st.top();
                st.pop();
                for(int j=0;j<adj[u].size();j++)
                {
                    int vv=adj[u][j];
                    if(!visited[vv])
                        st.push(vv),visited[vv]=true;
                }
                visited[u]=true;
            }
            v.push_back({i,u});
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        int u,vv;
        u=v[i].first;
        vv=v[i].second;
        cout<<m[u]<<" "<<m[vv]<<endl;
    }
    return 0;
}

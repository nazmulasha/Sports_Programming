#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<2*n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    int ans=0;
    bool ss=false;
    for(int i=1;i<2*n-1;i+=2)
    {
        ans+=(v[i+1]-v[i]);
    }
    int nn=n+n;
    for(int i=0;i<nn;i++)
    {
        for(int j=0;j<nn;j++)
        {
            if(i==j)
                continue;
            int tmp=0,curr=-1;
            for(int k=0;k<nn;k++)
            {
                if(k==j||i==k)
                    continue;
                if(curr==-1)
                    curr=v[k];
                else
                {
                    tmp+=abs(curr-v[k]);
                    curr=-1;
                }
            }
            ans=min(ans,tmp);
        }
    }
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>v;
    long long y,k,n;

    cin>>y>>k>>n;
    int tmp=y%k;
    tmp=y+(k-tmp);
    if(tmp==y)
        tmp+=k;
    for(int i=tmp;i<=n;i+=k)
    {
        if((i%k)==0)
        {
            v.push_back(i);
        }
    }

   // cerr<<v.size()<<endl;
    if(v.size()==0)
        printf("-1");
    else
    {
        for(int i=0;i<v.size();i++)
    {
        if(i==(v.size()-1))
        printf("%d\n",v[i]-y);

        else
        printf("%d ",v[i]-y);
    }

    }

    return 0;
}
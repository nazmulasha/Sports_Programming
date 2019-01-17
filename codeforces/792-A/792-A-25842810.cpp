#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<long long int>v;
    unordered_map<int,int>m,mm;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        mm[x]++;
        m[x]++;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    long long int mn=999999999999;
    for(int i=1;i<n;i++)
    {
        mn=min(mn,abs(v[i]-v[i-1]));
    }
    long long int ans=0;
    for(int i=1;i<n;i++)
    {
        if(abs(v[i]-v[i-1])==mn)
        {
          //  cout<<"yes"<<endl;
            if(mm[v[i]]>0||mm[v[i-1]]>0)
            {
                mm[v[i]]=0;
                mm[v[i]]=0;
                ans+=(m[v[i]]*m[v[i-1]]);
            }
        }
    }
    cout<<mn<<" "<<ans<<endl;
    return 0;
}
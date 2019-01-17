#include <bits/stdc++.h>

using namespace std;

void inp()
{
    #ifdef nazmulasha
    freopen("in.txt","r",stdin);
    #endif //nazmulasha
}
int main()
{
    vector<pair<int,int> >v,v2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        v.push_back(make_pair(r,l));
        v2.push_back(make_pair(l,r));

    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int m;
    cin>>m;
    vector<pair<int,int> >v3,v4;
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        v3.push_back(make_pair(l,r));
        v4.push_back(make_pair(r,l));
    }
    sort(v3.begin(),v3.end());
    sort(v4.begin(),v4.end());
    long long int ans=0,ans2=0;
    if(v[0].first<v3[m-1].first)
        ans=v3[m-1].first-v[0].first;
    if(v4[0].first<v2[n-1].first)
        ans2=v2[n-1].first-v4[0].first;
    cout<<max(ans,ans2)<<endl;

    return 0;
}
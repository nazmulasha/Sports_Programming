#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    vector<pair<int,int> >v2;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v2.push_back({tmp,i});
    }
    sort(v2.begin(),v2.end());
    int j=n-1,ans[n];
    while(j>0)
    {
        int tmp=v2[j].first,in;
        //cout<<j<<" "<<tmp<<endl;
        for(int i=0;i<n;i++)
        {
            if(v[i]>=tmp)
            {
                in=i;
                break;
            }
        }
        //cout<<in<<" "<<v[in]<<endl;
        for(int i=in;i<n;i++)
        {
            int num=v2[j].second;
           // cout<<num<<" ";
            ans[num]=v[i];
            j--;
            if(j<0)
                break;
        }
       // cout<<endl;
        //cout<<"why"<<endl;
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;


    return 0;
}
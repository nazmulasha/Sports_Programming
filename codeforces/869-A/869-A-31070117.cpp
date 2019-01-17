#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v1,v2;
    unordered_map<int,int>mm,mm2;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mm[x]=1;
        v1.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mm[x]=1;
        v2.push_back(x);
    }
    long long int cnt=0;
    for(int i=0;i<v1.size();i++)
    {
        for(int j=0;j<v2.size();j++)
        {
            int tmp=v1[i]^v2[j];
            if(mm[tmp])
            cnt++;
               // cnt++;
        }
    }
    //cout<<cnt<<endl;
    if(cnt%2==0)
        cout<<"Karen"<<endl;
    else
        cout<<"Koyomi"<<endl;
    return 0;
}
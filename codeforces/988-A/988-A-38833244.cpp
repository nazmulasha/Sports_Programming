#include <bits/stdc++.h>

using namespace std;

unsigned long long mn(unsigned long long x,unsigned long long y)
{
    if(x>y)
        return y;
    else
        return x;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        if(m[tmp]==0&&k>0)
        {
            k--;
            m[tmp]=1;
            v.push_back(i+1);
        }
    }
    if(k>0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
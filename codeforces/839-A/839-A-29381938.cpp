#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    int ans=0,sum=0,arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        ans++;
        sum+=arr[i];
        int tmp=min(8,sum);
        k-=tmp;
        sum-=tmp;
        if(k<1)
            break;
    }
    if(k>0)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
    return 0;
}
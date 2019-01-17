#include <bits/stdc++.h>

using namespace std;

int main()
{
  //  freopen("in.txt","r",stdin);
    long long int n,p;
    cin>>n>>p;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    long long int dp[n];
    memset(dp,0,sizeof(dp));
    dp[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        dp[i]=dp[i-1]+arr[i];
    }
    long long int total=dp[n-1],ans=0;
    for(int i=0;i<n-1;i++)
    {
        long long int l,r;
        l=dp[i];
        r=total-l;
        long long int sum=(l%p)+(r%p);
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}
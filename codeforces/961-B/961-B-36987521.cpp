#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    long long int dp[n];
    memset(dp,0,sizeof(dp));
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int y[n];
    cin>>y[0];
    dp[0]=arr[0]*y[0];
    for(int i=1;i<n;i++)
    {
        cin>>y[i];
        dp[i]=dp[i-1]+y[i]*arr[i];
        //cout<<i<<" "<<y[i]<<" "<<dp[i]<<endl;;
    }
    int x[n];
    long long int tot[n];
    memset(tot,0,sizeof(tot));
    tot[0]=arr[0];
    for(int i=1;i<n;i++){
        tot[i]=arr[i];
        tot[i]+=tot[i-1];
    }
    long long int ans=0;
    for(int i=0;i+k<=n;i++)
    {
        long long int tmp=(tot[i+k-1]-tot[i]+arr[i]);
       // cout<<tmp<<endl;
        if(i>0)
            tmp+=dp[i-1];
       // cout<<"int "<<tmp<<endl;
        tmp+=(dp[n-1]-dp[i+k-1]);
        ans=max(tmp,ans);
    //    cout<<i<<" "<<tmp<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
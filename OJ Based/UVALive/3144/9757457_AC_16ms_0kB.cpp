#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int dp[11][2005];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<2005;i++)
        dp[1][i]=1;
    for(int i=2;i<11;i++)
    {
        for(int j=1;j<2005;j++)
        {
            for(int k=2*j;k<=2005;k++)
            {
                dp[i][k]+=dp[i-1][j];
            }
        }
    }
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n,m;
        cin>>n>>m;
        long long int ans=0;
        for(int i=1;i<=m;i++)
            ans+=dp[n][i];
        cout<<"Data set "<<t<<": "<<n<<" "<<m<<" "<<ans<<endl;
    }
    return 0;
}

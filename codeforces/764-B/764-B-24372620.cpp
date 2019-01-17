#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    long long int dp[n+1];
    for(int i=1;i<=n/2;i++)
    {
        if(i%2==1)
        {
            dp[i]=arr[n-i+1];
            dp[n-i+1]=arr[i];
        }
        else{
            dp[i]=arr[i];
            dp[n-i+1]=arr[n-i+1];
        }
    }
    if(n%2==1)
        dp[(n/2)+1]=arr[(n/2)+1];
    for(int i=1;i<n;i++)
        cout<<dp[i]<<" ";
    cout<<dp[n]<<endl;
    return 0;
}
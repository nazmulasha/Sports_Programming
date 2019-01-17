/*************************************************
**********Bismillahir Rahmanir Rahim**************
*************************************************/

#include <bits/stdc++.h>

using namespace std;
int arr[100005];
void work()
{
    arr[0]=1;
    arr[1]=1;
    arr[2]=0;
    for(int i=4;i<100005;i+=2)
        arr[i]=1;

    for(int i=3;i<=sqrt(100005);i+=2)
    {
        if(arr[i])
            continue;
        for(int j=i+i;j<100005;j+=i)
            arr[j]++;
    }

}
int main()
{
    work();
    unordered_map<int,int>m;
    int n;
    cin>>n;
    int dp[n+5];
    memset(dp,0,sizeof(dp));
    int k=1;
    for(int i=2;i<=sqrt(n+1);i++)
    {
        if(arr[i])
            continue;
        k=1;
        for(int j=i+i;j<=n+1;j+=i)
        {
            if(dp[j]==0){
            dp[j]=k;
           // k++;
            }
        }
    }
    int ans=0;
    for(int i=2;i<=n+1;i++)
    {
        if(m[dp[i]]==0)
        {
            ans++;
            m[dp[i]]++;
        }
    }
    cout<<ans<<endl;
    for(int i=2;i<=n+1;i++)
        cout<<dp[i]+1<<" ";
    cout<<endl;

    return 0;
}
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],dp[5005],ans[5005];
    memset(ans,0,sizeof(ans));
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        memset(dp,0,sizeof(dp));
        long long int mx=0,tmp=0;
        for(int j=i;j<n;j++)
        {
            dp[arr[j]]++;
            if(dp[arr[j]]>mx)
            {
                mx=dp[arr[j]];
                tmp=arr[j];
            }
            else if(dp[arr[j]]==mx)
            {
                if(arr[j]<tmp)
                    tmp=arr[j];
            }
            ans[tmp-1]++;
        }
    }
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}

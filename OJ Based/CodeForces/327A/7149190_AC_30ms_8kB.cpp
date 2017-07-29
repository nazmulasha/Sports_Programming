#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int sum=0,dp[n];
    int arr[n];
    for(int i=0;i<n;i++)
    {
        dp[i]=sum;
        cin>>arr[i];
        if(arr[i]==1)
            sum++;

    }
    long long int tm=sum;
    if(n==tm)
    {
        cout<<n-1<<endl;
        return 0;
    }
    if(n==tm+1)
    {
        cout<<n<<endl;
        return 0;
    }
    //cout<<tm<<endl;
    sum=0;
   // cout<<dp[0]<<endl;
    for(int i=0;i<n;i++)
    {
        long long int tmp=0,m=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0)
                tmp++;
            else
            {
                //tmp--;
                m++;
            }
            sum=max(sum,tmp+dp[i]+(tm-dp[i]-m));
        }
    }
    cout<<sum<<endl;
    return 0;
}

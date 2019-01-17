#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    long long int ans=0,sum1=arr[0],sum2=arr[n-1];
    if(sum1==sum2)
        ans=max(ans,sum1);
    int i=0,j=n-1;
    while(j>i)
    {
        if(sum1<sum2)
        {
            i++;
            if(i<j)
                sum1+=arr[i];
            //i++;
        }
        else
        {
            j--;
            if(j>i)
                sum2+=arr[j];
            //j--;
        }
       // cout<<i<<" "<<j<<" "<<sum1<<" "<<sum2<<endl;
        if(sum1==sum2)
            ans=max(sum1,sum2);
    }
    cout<<ans<<endl;
    return 0;
}
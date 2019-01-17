#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int arr[k];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    long long int ans=-1,num=0,mn=99999999999999999;
    for(int i=0;i<k;i++)
    {
        long long int rem=n%arr[i];
        if(i==0)
        {
            ans=i+1;
            num=n/arr[i];
            mn=rem;
            continue;
        }
        if(mn>rem)
        {
            ans=i+1;
            num=n/arr[i];
            mn=rem;
        }
    }
    cout<<ans<<" "<<num<<endl;
    return 0;
}
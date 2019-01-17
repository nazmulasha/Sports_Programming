//with the name of almighty ALLAH
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long long int ans=0;
    for(int i=0;i<k;i++)
        ans+=arr[i];
    cout<<ans<<endl;
    return 0;
}
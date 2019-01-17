#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    long long int mn=arr[0],mx=arr[n-1];
    long long int ans=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>mn&&arr[i]<mx)
            ans++;
    }
    cout<<ans<<endl;

    return 0;
}
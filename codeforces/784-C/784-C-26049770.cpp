#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m=max(arr[i],m);
    }
    n=m^arr[n-1];
    cout<<n;
    return 0;

}
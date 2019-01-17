#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    if(n==2)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=1;i<=n;i++)
    {
        if(arr[arr[arr[i]]]==i)
        {
           // cout<<i<<" "<<arr[i]<<" "<<arr[arr[i]]<<endl;
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
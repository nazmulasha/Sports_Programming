#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>v;
    int tmp;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=0)
            sum+=arr[i];
        else
            break;
    }
    if(sum%2==1)
    {
        cout<<sum<<endl;
        return 0;
    }
    int mn=99999999,mp=99999999;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
            break;
        else if(abs(arr[i])%2==1)
        {
            mn=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0&&arr[i]%2==1)
        {
            mp=arr[i];
            break;
        }
    }
    if(mp==99999999)
        sum+=mn;
    else if(mn==99999999)
        sum-=mp;
    else
    {
        if(abs(mn)<mp)
            sum+=mn;
        else
            sum-=mp;
    }
    cout<<sum<<endl;
    return 0;
}
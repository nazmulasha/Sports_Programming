#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int mn=99999999;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        arr[x]++;
    }
    mn=arr[1];
    for(int i=1;i<=n;i++)
    {
        mn=min(mn,arr[i]);
    }
    cout<<mn<<endl;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    int mn=10;
    bool ss=false;
    for(int i=m+1;i<=n;i++)
    {
        if(arr[i]!=0&&arr[i]<=k)
        {
            ss=true;
            break;
        }
        mn+=10;
    }
    if(!ss)
        mn=999999999;
    int mm=10;
    ss=false;
    for(int i=m-1;i>=1;i--)
    {
        if(arr[i]!=0&&arr[i]<=k)
        {
            ss=true;
            break;
        }
        mm+=10;
    }
    if(!ss)
        mm=999999999;
    cout<<min(mm,mn)<<endl;
    return 0;
}
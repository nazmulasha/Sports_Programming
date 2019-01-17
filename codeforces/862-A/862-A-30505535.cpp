#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int cmx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i)
        {
            cmx=i;
            break;
        }
    }
    if(cmx==-1)
        cmx=n;
    if(cmx==k)
        cout<<0<<endl;
    else
    {
        int ans=0;
        for(int i=0;i<=k;i++)
        {
            //cout<<"hi"<<endl;
            bool ss=true;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==i)
                {
                    ss=false;
                    break;
                }
            }
            if(ss)
            {
                if(i!=k)
                    ans++;
            }
            if(!ss)
            {
                if(i==k)
                    ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
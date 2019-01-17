#include <bits/stdc++.h>

using namespace std;

unsigned long long mn(unsigned long long x,unsigned long long y)
{
    if(x>y)
        return y;
    else
        return x;
}

int main()
{
    int n;
    cin>>n;
    long long int arr[n];
    unsigned long long cost[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cin>>cost[i];
    long long int mcost=-1;
    for(int i=1;i<n-1;i++)
    {
        long long int l=-1;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i])
            {
                if(l==-1)
                    l=cost[j];
                else
                    l=mn(l,cost[j]);
            }
        }
        if(l==-1)
            continue;
        long long int r=-1,tmp=0;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                if(r==-1)
                    r=cost[j];
                else
                    r=mn(r,cost[j]);
            }
        }

        if(r==-1)
            continue;

        tmp=l+r+cost[i];
        if(mcost==-1)
            mcost=tmp;
        else
            mcost=mn(mcost,tmp);
    }

    cout<<mcost<<endl;
    return 0;
}
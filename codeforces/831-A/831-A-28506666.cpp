#include <bits/stdc++.h>

using namespace std;
#define mx 10000
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(n==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    int a=0;
    bool ss=true;
    for(int i=1;i<n;i++)
    {
        if(a==0)
        {
            if(arr[i]==arr[i-1])
                a=1;
            else if(arr[i]<arr[i-1])
                a=2;
        }
        if(a==1)
        {
            if(arr[i]<arr[i-1])
                a=2;
            else if(arr[i]>arr[i-1])
            {
                ss=false;
            }
        }
        else if(a==2)
        {
            if(arr[i]==arr[i-1])
                ss=false;
            else if(arr[i]>arr[i-1])
                ss=false;
        }
        if(!ss)
            break;
    }
    if(ss)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
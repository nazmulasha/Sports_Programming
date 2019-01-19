#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int a,long long int b)
{
    return (b==0)?a:gcd(b,a%b);
}
long long int lcm(long long int a,long long int b)
{
    return (a/gcd(a,b))*b;
}
//so this is not a implementation problem. it's a recursion i guess :P

long long int work(long long int a,long long int b,long long int pre,long long int arr[])
{
    if(a>b)
        return 0;
    int in;
    long long int mn=9999999999;
    for(int i=a;i<=b;i++)
    {
        if(arr[i]<mn)
        {
            mn=arr[i];
            in=i;
        }
    }
    return min(b-a+1,work(a,in-1,mn,arr)+work(in+1,b,mn,arr)+mn-pre);
}

int main()
{
    long long int n;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<work(0,n-1,0,arr)<<endl;
    return 0;
}

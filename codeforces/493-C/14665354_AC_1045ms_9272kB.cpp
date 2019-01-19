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



int main()
{
    int m,n;
    cin>>n;
    long long int arr[n],mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(arr[i],mx);
    }
    cin>>m;
    long long int ar[m];
    for(int i=0;i<m;i++)
    {
        cin>>ar[i];
        mx=max(ar[i],mx);
    }
    sort(arr,arr+n);
    sort(ar,ar+m);
    vector<long long int>v;
    v.push_back(0);
    v.push_back(mx+1);
    for(int i=0;i<n;i++)
        v.push_back(arr[i]);
    for(int i=0;i<m;i++)
        v.push_back(ar[i]);
    long long int xx=0,yy=0,mmx=-999999999999,dd;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        long long int d=v[i];
       // cout<<d<<endl;
        int x=upper_bound(arr,arr+n,d)-arr;
        int y=upper_bound(ar,ar+m,d)-ar;
        long long int a= x*2+(n-x)*3;
        long long int b= y*2+(m-y)*3;
        //cout<<d<<" "<<a<<" "<<b<<endl;
        if(a-b>mmx)
        {
            dd=d;
            mmx=a-b;
            xx=a;
            yy=b;
        }
        else if(a-b==mmx&&a>xx)
        {
            xx=a;
            yy=b;
        }

    }
    //cout<<dd<<endl;
    cout<<xx<<":"<<yy<<endl;
    return 0;
}

#include <iostream>
#include<map>
#include <algorithm>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    map<long long int ,int>m;
    long long int arr[n];
    long long int mx=0,mn=99999999999999,tmp,r;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp<mn)
            mn=tmp;
        if(tmp>mx)
            mx=tmp;
        m[tmp]++;
        arr[i]=tmp;
    }
//map<long long int ,int>::iterator iter;
    sort(arr,arr+n);
    cout<<mx-mn<<" ";
    r=mx-mn;
    long long int ans=0;
    if(r==0)
    {
        ans=((n*(n-1)))/2;
       // ans/=2;
        cout<<ans<<endl;
        return 0;
    }
//    long long int ans=0;
    for(int i=0;i<n;i++)
    {
         if(m[arr[i]+r]>0)
         {
             ans+=m[arr[i]+r];
         }
    }
    cout<<ans<<endl;
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
bool comp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n+5];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n,comp);
    if(a>b)
        swap(a,b);
    double s1=0,s2=0;
    int i=0,a1=ceil(a/2);

    for(i;i<a;i++)
    {
        s1+=arr[i];
    }
    int k=i;
    for(i;i<k+b;i++){
        s2+=arr[i];
    }
    cout<<fixed<<setprecision(8);
    double ans=(s1/(double)a);
    double xp=s2/(double)b;
    ans+=xp;
    cout<<ans<<endl;
    return 0;
}
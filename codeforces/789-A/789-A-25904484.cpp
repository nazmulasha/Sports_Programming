#include <bits/stdc++.h>

using namespace std;

bool leap(long long int y)
{
    if(y%(long long int)400==0)
        return true;
    else if(y%(long long int)100==0)
        return false;
    else if(y%(long long int) 4==0)
        return true;
    else
        return false;
}
const int MOD = 1000000007;

long long int add(long long int x,long long int y){return (x + y < MOD ? x + y : x + y - MOD); }
long long int mul(long long int x,long long int y){return 1LL * x * y % MOD; }
int main()
{

    long long int n,k;
    cin>>n>>k;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int sum=0,tot=k+k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=tot)
        {
            sum+=(arr[i]/tot);
            arr[i]=arr[i]%tot;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>k)
        {
            sum++;
            arr[i]=0;
        }
    }
    long long int an=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
            an++;
    }
    sum+=(an/2);
    if(an%2!=0)
        sum++;
    cout<<sum<<endl;

    return 0;
}
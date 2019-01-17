#include <bits/stdc++.h>

using namespace std;


bool prime(long long int n)
{
    long long int m=sqrt(n);
    for(int i=3;i<=m;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    long long int n;
    cin>>n;
    long long int ans=0;
    if(n%2==0)
    {
        if(n==2)
            ans=1;
        else if(n>2)
            ans=2;
    }
    else
    {
        if(n==1)
            ans=1;
        else if(prime(n))
            ans=1;
        else if(prime(n-2))
            ans=2;
        else
            ans=3;
    }
    cout<<ans<<endl;
    return 0;
}
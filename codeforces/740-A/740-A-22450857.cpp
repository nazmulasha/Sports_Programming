#include <bits/stdc++.h>

using namespace std;


int main()
{

    long long int n,a,b,c;
    cin>>n>>a>>b>>c;
    long long int sum=0;
    long long int tmp=n/4;
    if(tmp*4!=n)
        tmp++;
    long long int xp=tmp*4;
    tmp=xp-n;
    if(n==0)
        tmp=4;
    if(tmp==1)
    {
        sum=min(a,min(b+c,c*3));
        sum=min(sum,2*b+a);
    }
    else if(tmp==2)
    {
        long long int mp=2*a;
        sum=min(mp,min(b,c*2));
    }
    else if(tmp==3)
    {
        long long int mp=3*a;
        sum=min(mp,min(c,a+b));
    }
    else if(tmp==4)
    {
        long long int mp=4*a;
        sum=min(mp,min(2*b,4*c));
        sum=min(sum,min(2*a+b,a+c));
        sum=min(sum,b+c*2);

    }
    cout<<sum<<endl;
    return 0;
}
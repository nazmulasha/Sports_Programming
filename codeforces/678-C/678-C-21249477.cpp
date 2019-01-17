#include <iostream>

using namespace std;


long long int gcd ( long long int a, long long int b )
{
    long long int c;
    while ( a != 0 )
    {
        c = a;
        a = b%a;
        b = c;
    }
    return b;
}

long long int  lcm(long long int a, long long int b)
{
    return (b / gcd(a, b) ) * a;
}


int main()
{
    long long int n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    long long int sum=(n/a)*p;
    sum+=((n/b)*q);
    sum-=((n/(lcm(a,b)))*min(p,q));
    cout<<sum<<endl;
    return 0;
}
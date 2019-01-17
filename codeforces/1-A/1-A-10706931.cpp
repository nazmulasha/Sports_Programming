#include <iostream>

using namespace std;

int main()
{
    long long n,m,a;
    long long r1,r2;
    cin>>n>>m>>a;
    r1=(n+a-1)/a;
    r2=(m+a-1)/a;
    cout<<r1*r2;
    return 0;
}
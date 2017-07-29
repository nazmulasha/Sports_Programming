#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
#define m 1000000007
long long int power(long long int b,long long int p)
{
    if(p==0)
        return 1;
    else if(p%2==0)
    {
        long long int tmp=power(b,p/2);
        return ((tmp%m)*(tmp%m))%m;
    }
    else
        return ((b%m)*(power(b,p-1)%m))%m;
}
int main()
{

    int n;
    cin>>n;
    long long int r=power(3,n*3)%m;
    long long int tmp=power(7,n)%m;
    long long int sum=r-((tmp+m)%m);
    if(sum<0)
    {
        sum+=m;
    }
    sum%=m;
    cout<<sum<<endl;
    return 0;
}


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <cstring>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

long long int power(long long int b,long long int p,long long int m)
{
    if(p==0)
        return 1;
    if(p%2==0)
    {
        long long int x=power(b,p/2,m)%m;
        return ((x%m)*(x%m))%m;
    }
    else
        return ((b%m)*(power(b,p-1,m)%m))%m;
}
int main()
{
    long long int b,p,m;
    while(cin>>b>>p>>m)
    {
        cout<<power(b,p,m)<<endl;
    }

    return 0;
}

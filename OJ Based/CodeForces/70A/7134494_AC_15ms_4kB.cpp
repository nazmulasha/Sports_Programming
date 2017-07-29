#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
#define m 1000003
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
    if(n==0)
        n++;
    cout<<power(3,n-1)<<endl;
    return 0;
}

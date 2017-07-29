#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int divisor(int a,int b)
{

    if(a>b)
        swap(a,b);
    int d=0;
    int tmp=gcd(a,b),i;
    for(i=1;i*i<=tmp;i++)
    {
        if(tmp%i==0)
            d+=2;
    }
    i--;
    if(i*i==tmp)
        d--;
    return d;
}

int main()
{

    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int result;
        result=divisor(a,b);
        printf("%d\n",result);

    }
    return 0;
}

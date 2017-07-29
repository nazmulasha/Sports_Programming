#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdio>
using namespace std;


double calcT(double d,double h)
{
    double tmp=6.11*exp(5417.753*(1/273.16-1/(d+273.16)));
    tmp=0.5555*(tmp-10.0);
    return h-tmp;
}

double calcD(double t,double h)
{
    double tmp=h-t;
    tmp=(tmp/0.5555)+10.0;
    return 1/(1/273.16 - 1/5417.753*log(tmp/6.11))-273.16;
}

double calcH(double t,double d)
{
    double tmp=6.11*exp(5417.7530*((1/273.16)-(1/(d+273.16))));
    tmp=(0.5555)*(tmp-10.0);
    return t+tmp;
}

int main()
{
    double x,y,t,h,d;
    char a,b,c;
    while(cin>>a)
    {
        if(a=='E')
            break;
        cin>>x>>b>>y;
        if(a=='T')
        {
            if(b=='H')
            {
                t=x;
                h=y;
                d=calcD(t,h);
            }
            else
            {
                t=x;
                d=y;
                h=calcH(t,d);
            }
        }
        else if(a=='H')
        {
            if(b=='T')
            {
                t=y;
                h=x;
                d=calcD(t,h);
            }
            else
            {
                h=x;
                d=y;
                t=calcT(d,h);
            }
        }
        else
        {
            if(b=='H')
            {
                d=x;
                h=y;
                t=calcT(d,h);
            }
            else
            {
                d=x;
                t=y;
                h=calcH(t,d);
            }
        }
        printf("T %.1f D %.1f H %.1f\n",t,d,h);
    }
    return 0;
}

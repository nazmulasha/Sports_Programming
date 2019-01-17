#include <bits/stdc++.h>

using namespace std;

int main()
{

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    double s,p,m;
    cin>>s>>m>>p;
    double l=0.0,r=10*s,mid,lm=10e-6;
    mid=(r+l)/2.0;
    for(int i=0;i<1000;i++)
    {
        double tmp=s;
        for(int i=1;i<=m;i++)
        {
            tmp=tmp-(mid-tmp*p/100);
        }
        if(tmp>lm)
        {
            l=mid;
            mid=(l+r)/2;
        }
        else
        {
            r=mid;
            mid=(r+l)/2;
        }
    }
    printf("%.10lf\n",l);
}
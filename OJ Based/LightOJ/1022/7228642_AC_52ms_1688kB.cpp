#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++){
    double r;
    cin>>r;
    double sq=(r*2)*(r*2);
    double cir=2*acos(0.0)*r*r;
    double ans=sq-cir;
    printf("Case %d: %.2lf\n",t,ans);}
    return 0;
}

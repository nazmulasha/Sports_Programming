#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double len,wid,rad;
        cin>>len;
        wid=(len*6)/10;
        rad=len/5;
        //cout<<len<<" "<<wid<<" "<<rad<<endl;
        double ar,ac;
        ac=(acos(-1)*rad*rad);
        ar=(len*wid)-ac;
        printf("%.2lf %.2lf\n",ac,ar);
    }
    return 0;
}

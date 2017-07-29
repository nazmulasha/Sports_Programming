#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int tt,y;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        double x,y,tmp;
        cin>>x>>y;
        tmp=3.1416*(x*x+y*y)/2;
        y=(int)(tmp/50)+1;
        cout<<"Property "<<t<<": This property will begin eroding in year "<<y<<"."<<endl;
    }
    cout<<"END OF OUTPUT."<<endl;
    return 0;
}

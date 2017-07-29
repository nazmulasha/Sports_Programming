#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int v1,v2,t,d;
    cin>>v1>>v2>>t>>d;
    int tmp=(t-1)*d;
    v2+=tmp;
    int max=0;
    for(int i=0;i<t;i++)
    {
        if(v1<v2)
            max+=v1;
        else
            max+=v2;
        v1+=d;
        v2-=d;
    }
    cout<<max<<endl;
    return 0;
}

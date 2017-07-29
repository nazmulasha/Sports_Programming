#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int result=10e7;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            if(y<0)
                continue;
            int tmp=ceil(4.5*3600/x+y);
            result=min(result,tmp);
        }
        cout<<result<<endl;
    }
    return 0;
}

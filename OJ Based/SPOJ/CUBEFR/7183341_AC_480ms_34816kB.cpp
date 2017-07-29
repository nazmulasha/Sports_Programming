#include <iostream>
#include <math.h>
#include <map>
#include <cstring>
using namespace std;
#define mx 1000005
int main()
{
    map<int,int>m;
    int in=0,ind=0;
    for(int i=2;i<105;i++)
    {
        if(m[i]==0)
        {
            long long int k=i*i*i;
            for(int j=k;j<mx;j+=k)
            {
                m[j]=-1;
            }
        }
    }
    int k=1;

    for(int i=1;i<mx;i++)
    {
        if(m[i]==0)
        {
            m[i]=k;
            k++;
        }
    }
    int tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        int n;
        cin>>n;
        if(m[n]==-1)
            cout<<"Case "<<t<<": Not Cube Free"<<endl;
        else
            cout<<"Case "<<t<<": "<<m[n]<<endl;
    }
    return 0;
}

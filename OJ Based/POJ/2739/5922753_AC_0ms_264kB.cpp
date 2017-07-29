#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int prime[4100];
    int k=0;
    for(int i=2;i<=10000;i++)
    {
        bool st=true;
        for(int j=2;j<=(int)sqrt((double)i);j++)
        {
            if(i%j==0)
            {
                st=false;
                break;
            }
        }
        if(st==true)
        {
            prime[k]=i;
            k++;
        }
    }
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int count=0,sum=0;
        for(int i=0;i<k;i++)
        {
            for(int j=i;j<k;j++)
            {
                if(sum>=n)
                    break;
                sum+=prime[j];
            }
            if(sum==n)
                count++;
            sum=0;
        }
        cout<<count<<endl;
    }
    return 0;
}

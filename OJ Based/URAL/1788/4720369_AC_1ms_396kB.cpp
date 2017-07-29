#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    int g,b,sum=0;
    cin>>g>>b;
    int girl[g],boy[b];
    for(int i=0;i<g;i++){
        cin>>girl[i];
        sum+=girl[i];
    }
    for(int i=0;i<b;i++)
        cin>>boy[i];
    sort(boy,boy+b);
    sort(girl,girl+g);
    if(g<b)
    {
        int i=g-1,k=1;
        while(i>=0){

        int su=0;
        for(int j=0;j<i;j++)
        {
            su+=girl[j];
        }
        for(int j=0;j<b-k;j++)
        {
            su=su+(boy[j]*k);
        }
        if(su<sum)
        {
            sum=su;
        }

        i--;
        k++;
        }
    }
    if(g>b)
    {
        int i=b-1,k=1;
        while(i>=0){

        int su=0;
        for(int j=0;j<i;j++)
        {
            su=su+(boy[j]*k);
        }
        for(int j=0;j<g-k;j++)
        {
            su+=girl[j];
        }
        if(su<sum)
        {
            sum=su;
        }

        i--;
        k++;
        }
    }
    if(g==b)
    {
        int i=b-1,k=1;
        while(i>=0){

        int su=0;
        for(int j=0;j<i;j++)
        {
            su=su+(boy[j]*k);
        }
        for(int j=0;j<i;j++)
        {
            su+=girl[j];
        }
        if(su<sum)
        {
            sum=su;
        }

        i--;
        k++;
        }
    }
    cout<<sum<<endl;
    return 0;
}

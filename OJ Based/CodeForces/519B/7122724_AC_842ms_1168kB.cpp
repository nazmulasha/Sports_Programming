#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int v1[n+5],v2[n+5],v3[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>v2[i];
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>v3[i];
    }
    sort(v1,v1+n);
    sort(v2,v2+n-1);
    sort(v3,v3+n-2);
    for(int i=0;i<n;i++)
    {
        if(v1[i]!=v2[i]){
            cout<<v1[i]<<endl;
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(v2[i]!=v3[i]){
            cout<<v2[i]<<endl;
            break;
        }
    }
    return 0;
}

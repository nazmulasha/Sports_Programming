#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int mn=105,mp,mx=0,mxp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
        {
            mx=arr[i];
            mxp=i+1;
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
            mp=i+1;
        }
    }
   // cout<<mp<<" "<<mxp<<endl;
    int dist=abs(mp-mxp);
    int sum,sum2;
    if(mp>mxp)
    {
        sum=max((mxp-1)+dist,(n-mp)+dist);
    }
    else
    {
        sum=max((mp-1)+dist,(n-mxp)+dist);
    }
    cout<<sum<<endl;

    return 0;
}